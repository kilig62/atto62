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
//	char name[20];//����
//	int age;//����
//	char sex[5];//�Ա�
//	char id[15];//ѧ��
//};
//
//
////��ӡ�ṹ����Ϣ
//struct Stu s{ "����", 20, "��", "20200101" };
//
////.Ϊ�ṹ��Ա���ʲ�����
//printf("name=%s age=%d sex=%s id=%s\n", s.name, s.age, s.sex, s.id);


int main()
{
	int num = 10;
	&num;//ȡ��num�ĵ�ַ
	printf("%p\n", &num);//��ӡ��ַ��%p--�Ե�ַ��ʽ��ӡ
	return 0;
}


