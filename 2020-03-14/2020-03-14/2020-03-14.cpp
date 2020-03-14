#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<stdlib.h>
//
//int main()
//{
//	int num = 10;
//	int *p = &num;
//	*p = 20;
//	system("pause");
//	return 0;
//}


//int main()
//{
//	char ch = 'w';
//	char* pc = &ch;
//	*pc = 'q';
//	printf("%c\n", ch);
//
//	system("pause");
//	return 0;
//}



//int main()
//{
//	printf("%d\n", sizeof(char *));//4
//	printf("%d\n", sizeof(short *));//4
//	printf("%d\n", sizeof(int *));//4
//	printf("%d\n", sizeof(double *));//4
//
//	system("pause");
//	return 0;
//}

//struct Stu
//{
//	char name[20];//名字
//	int age;//年龄
//	char sex[5];//性别
//	char id[15];//学号
//};
//
//
////打印结构体信息
//struct Stu s{ "张三", 20, "男", "20200101" };
//
////.为结构成员访问操作符
//printf("name=%s age=%d sex=%s id=%s\n", s.name, s.age, s.sex, s.id);


int main()
{
	int num = 10;
	&num;//取出num的地址
	printf("%p\n", &num);//打印地址，%p--以地址形式打印
	return 0;
}


