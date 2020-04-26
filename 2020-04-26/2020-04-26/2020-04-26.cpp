#define _CRT_SECURE_NO_WARNINGS 1


#define _CRT_SECURE_NO_WARNINGS 1

#include<iostream>
using namespace std;

#if 0
// unique_ptr:一份资源只能让一个对象管理，不允许共享
//不能被拷贝

#include<memory>

int main()
{
	unique_ptr<int> up1(new int);
	//unique_ptr<int> up2(new int);//无法拷贝
	//unique_ptr<int> up3;
	//up3 = up1;//up1不能给up3赋值

	return 0;
}
#endif


#if 0
namespace bite
{
	template<class T>
	class unique_ptr
	{
	public:
		unique_ptr(T* ptr = nullptr)
			: _ptr(ptr)
		{}

		~unique_ptr()
		{
			if (ptr)
				delete _ptr;

		}
		T& operator*()
		{
			return *_ptr;
		}

		T* operator->()
		{
			return _ptr;
		}

		//C++98
		//private:
		//unique_ptr(const unique_ptr<T>&);
		//unique_ptr<T>& operator=(const unique_ptr<T>&);
		//C++11
		unique_ptr(const unique_ptr<T>&) = delete;
		unique_ptr<T>& operator=(const unique_ptr<T>&) = delete;
	private:
		T* _ptr;
	};
}

int main()
{
	bite::unique_ptr<int> up1(new int);
	//bite::unique_ptr<int> up2(up1);//尝试引用已删除的函数

	//bite::unique_ptr<int> up3;
	//up3 = up1;//尝试引用已删除的函数
	return 0;
}
#endif

#if 0
// shared_ptr:RAII+operator*()/operator->+引用计数==共享

namespace bite
{
	template<class T>
	class shared_ptr
	{
	public:
		shared_ptr(T* ptr = nullptr)
			: _ptr(ptr)
			, _pCount(nullptr)
		{
			if (_ptr)
				_pCount = new int(1);
		}

		shared_ptr(const shared_ptr<T>& sp)
			: _ptr(sp._ptr)
			, _pCount(sp._pCount)
		{
			if (_ptr)
				++(*_pCount);
		}

		// sp1 = sp2;
		// sp1:未管理资源---直接与sp2共享
		// sp1:单独管理资源---在与sp2共享前，必须先释放自己的资源
		// sp1:与其他shared_ptr的对象已经共享资源---sp1将其计数减一，再与sp2共享

		shared_ptr<T>& operator=(const shared_ptr<T>& sp)
		{
			if (_ptr != sp._ptr)
			{
				Release();

				//与sp共享
				_ptr = sp._ptr;
				_pCount = sp._pCount;

				//sp的资源多了当前对象共享
				if (_ptr)
					++(*_pCount);
			}
			return *this;
		}

		~shared_ptr()
		{
			Release();
		}

		T& operator*()
		{
			return *_ptr;
		}

		T* operator->()
		{
			return _ptr;
		}

		int use_count()
		{
			return *_pCount;
		}

	private:
		void Release()
		{
			if (_ptr && 0 == --(*_pCount))
			{
				delete _ptr;
				delete _pCount;
			}
		}
	private:
		T* _ptr;
		int* _pCount;
	};
}

void TestFunc()
{
	bite::shared_ptr<int> sp1(new int);
	bite::shared_ptr<int> sp2(sp1);

	bite::shared_ptr<int> sp3(new int);
	bite::shared_ptr<int> sp4;
	//bite::shared_ptr<int> sp5((int*)malloc(sizeof(int)));
	//bite::shared_ptr<FILE> sp6(fopen("666.txt", "rb"));
	//bite::shared_ptr<int> sp7(new int[10]);

	sp4 = sp1; // sp4未管理资源，直接与sp1共享
	sp3 = sp1; // sp3单独管理资源---释放旧资源，与sp1共享
	sp2 = sp1;
}

#endif


#if 0
//定制删除器
template<class T>
class DFDel
{
public:
	void operator()(T*& p)
	{
		if (p)
		{
			delete p;
			p = nullptr;
		}
	}
};

template<class T>
class Free
{
public:
	void operator()(T*& p)
	{
		if (p)
		{
			free(p);
			p = nullptr;
		}
	}
};

// C++11: lambda

class FClose
{
public:
	void operator()(FILE* p)
	{
		if (p)
		{
			fclose(p);
			p = nullptr;
		}
	}
};

#include<mutex>

namespace bite
{
	template<class T, class DF = DFDel<T>>
	class shared_ptr
	{
	public:
		shared_ptr(T* ptr = nullptr)
			: _ptr(ptr)
			, _pCount(nullptr)
			, _pMutex(new mutex)
		{
			if (_ptr)
				_pCount = new int(1);
		}

		shared_ptr(const shared_ptr<T>& sp)
			: _ptr(sp._ptr)
			, _pCount(sp._pCount)
			, _pMutex(sp._pMutex)
		{
			ADDRefCount();
		}

		// sp1 = sp2;
		// sp1:未管理资源---直接与sp2共享
		// sp1:单独管理资源---在与sp2共享前，必须先释放自己的资源
		// sp1:与其他shared_ptr的对象已经共享资源---sp1将其计数减一，再与sp2共享

		shared_ptr<T>& operator=(const shared_ptr<T>& sp)
		{
			if (_ptr != sp._ptr)
			{
				Release();

				//与sp共享
				_ptr = sp._ptr;
				_pCount = sp._pCount;
				_pMutex = sp._pMutex;

				//sp的资源多了当前对象共享
				ADDRefCount();
			}
			return *this;
		}

		~shared_ptr()
		{
			Release();
		}

		T& operator*()
		{
			return *_ptr;
		}

		T* operator->()
		{
			return _ptr;
		}

		int use_count()
		{
			return *_pCount;
		}

	private:
		void Release()
		{
			_pMutex->lock();
			if (_ptr && 0 == --(*_pCount))
			{
				//delete _ptr;
				//DF df;
				//df()(_ptr);
				//等价于
				DF()(_ptr);     //DF是一个类型   DF():创建一个无名对象
				delete _pCount;
				delete _pMutex;
			}
			_pMutex->unlock();
		}

		void ADDRefCount()
		{
			_pMutex->lock();
			if (_ptr)
				++(*_pCount);
			_pMutex->unlock();
		}
	private:
		T* _ptr;
		int* _pCount;
		mutex* _pMutex;
	};
}

//void TestFunc()
//{
//	bite::shared_ptr<int, Free<int>> sp1((int*)malloc(sizeof(int)));
//	bite::shared_ptr<FILE, FClose> sp2(fopen("666.txt", "rb"));
//	//bite::shared_ptr<int> sp3(new int[10]); // 该应用方式不存在
//	bite::shared_ptr<int> sp3(new int);
//
//}

class Date
{
public:
	Date()
	{
		_year = _month = _day = 0;
	}

	int _year;
	int _month;
	int _day;
};

void SharedPtrFunc(bite::shared_ptr<Date>& sp, size_t n)
{
	for (size_t i = 0; i < n; ++i)
	{
		//这里智能指针拷贝会++计数，智能指针析构会--计数，这里线程是安全的。
		bite::shared_ptr<Date> copy(sp);
		//这里智能指针访问管理的资源，不是线程安全的。所以我们看看这些值两个线程++了2n次，但是最终看到的结果，不一定是加了2n
		copy->_year++;
		copy->_month++;
		copy->_day++;
	}
}

#include<thread>

int main()
{
	bite::shared_ptr<Date> p(new Date);

	const size_t n = 10000;
	thread t1(SharedPtrFunc, p, n);
	thread t2(SharedPtrFunc, p, n);

	t1.join();
	t2.join();
	cout << p->_year << endl;
	cout << p->_month << endl;
	cout << p->_day << endl;

	return 0;
}
#endif


#include<memory>

//shared_ptr:循环引用的问题

struct ListNode
{
	ListNode(int data = int())
	: pre(nullptr)
	, next(nullptr)
	, _data(data)
	{
		cout << "ListNode():" << this << endl;

	}

	~ListNode()
	{
		cout << "~ListNode():" << this << endl;
	}


	//ListNode* _pPre;
	//ListNode* _pNext;
	shared_ptr<ListNode> pre;
	shared_ptr<ListNode> next;
	int _data;
};

void TestFunc()
{
	shared_ptr<ListNode> sp1(new ListNode(10));
	shared_ptr<ListNode> sp2(new ListNode(20));
	cout << sp1.use_count() << endl;
	cout << sp2.use_count() << endl;

	sp1->next = sp2;
	sp2->pre = sp1;

	cout << sp1.use_count() << endl;
	cout << sp2.use_count() << endl;
}

int main()
{
	TestFunc();
	return 0;
}
