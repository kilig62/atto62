#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<stdlib.h>

//int main()
//{
//	int a = 0;
//	int b = 2;
//	if (a == 1)
//	{
//		if (b == 2)
//			printf("hehe\n");
//	}
//	else
//	{
//		printf("haha\n");
//	}
//	return 0;
//}


//int main()
//{
//	int coding = 0;
//	printf("���ȥ�ô�����:>");
//	scanf("%d", &coding);
//	if (coding == 1)
//	{
//		printf("offer������\n");
//	}
//	else
//	{
//		printf("���ؼ��ֵ�\n");
//	}
//	system("pause");
//	return 0;
//}


//int main()
//{
//	int coding = 0;
//	printf("���ȥ�ô����𣿣�ѡ�� 1 or 0 ������������п󣬣�ѡ�� -1 ��:>");
//	scanf("%d", &coding);
//	if (coding == 1)
//	{
//		printf("offer������\n");
//	}
//	else if (coding == 0)
//	{
//		printf("���ؼ��ֵ�\n");
//	}
//	else if (coding == -1)
//	{
//		printf("���ʻ�ȱ�Ȳ��Ҽ���\n");
//	}
//
//	system("pause");
//	return 0;
//}



//�ж�һ�����Ƿ�Ϊ����

//int main()
//{
//	int a = 0;
//	printf("������һ����:>");
//	scanf("%d", &a);
//	if (a % 2 == 0)
//	{
//		printf("������������!\n");
//	}
//	else
//	{
//		printf("����Ϊ����!\n");
//	}
//
//	system("pause");
//	return 0;
//}


//���1-100֮�������

//int main()
//{
//	int i = 0;
//	for (i = 1; i < 100; i += 2)
//	{
//		if (i % 2 == 0)
//			i += 2;
//		else
//			printf("%d ", i);
//	}
//
//	system("pause");
//	return 0;
//}


//int main()
//{
//	int day = 0;
//	printf("����һ������:>\n");
//	scanf("%d", &day);
//	switch (day)
//	{
//	case 1:
//		printf("����һ\n");
//		break;
//	case 2:
//		printf("���ڶ�\n");
//		break;
//	case 3:
//		printf("������\n");
//		break;
//	case 4:
//		printf("������\n");
//		break;
//	case 5:
//		printf("������\n");
//		break;
//	case 6:
//		printf("������\n");
//		break;
//	case 7:
//		printf("������\n");
//		break;
//	}
//	system("pause");
//	return 0;
//}


//int main()
//{
//	int n = 1;
//	int m = 2;
//	switch (n)
//	{
//	case 1:
//		m++;
//	case 2:
//		n++;
//	case 3:
//		switch (n)
//		{
//			//switch����Ƕ��ʹ��
//		case 1:
//			n++;
//		case 2:
//			m++;
//			n++;
//			break;
//		}
//	case 4:
//		m++;
//		break;
//	default:
//		break;
//	}
//	printf("m=%d,n=%d\n", m, n);
//
//	system("pause");
//	return 0;
//}


//����Ļ�ϴ�ӡ1-10������

//int main()
//{
//	int i = 1;
//	while (i <= 10)
//	{
//		printf("%d ", i);
//		i++;
//	}
//	system("pause");
//	return 0;
//}

//int main()
//{
//	int i = 1;
//	while (i <= 10)
//	{
//		if (i == 5)
//			break;//i=5ʱ����ֹͣ�������i++��һ��
//		printf("%d ", i);
//		i++;
//	}
//	return 0;
//}


//int main()
//{
//	int i = 1;
//	while (i <= 10)
//	{
//		if (i == 5)
//			continue;
//		printf("%d ", i);
//		i++;
//	}
//	system("pause");
//	return 0;
//}

//int main()
//{
//	int i = 1;
//	while (i <= 10)
//	{
//		i++;
//		if (i == 5)
//			continue;
//		printf("%d ", i);
//	}
//	system("pause");
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	for (i = 1; i <= 10; i++)
//	{
//		printf("%d ", i);
//	}
//	system("pause");
//	return 0;
//}


//int main()
//{
//	int i = 0;
//	for (i = 1; i <= 10; i++)
//	{
//		if (i == 5)
//			break;
//		printf("%d ", i);
//	}
//	system("pause");
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	for (i = 1; i <= 10; i++)
//	{
//		if (i == 5)
//			continue;
//		printf("%d ", i);
//	}
//	system("pause");
//	return 0;
//}



//int main()
//{
//	//����1
//	for (;;)//��ѭ�������жϱ�ʾ����Ϊ�棩
//		//�޳�ʼ�������жϣ��޵���
//	{
//		printf("hehe\n");
//	}
//	//����2
//	int x, y;
//	for (x = 0, y = 0; x < 2 && y < 5; ++x, y++)
//	{
//		printf("hehe\n");
//	}
//	return 0;
//}


//����ѭ��Ҫѭ�����ٴ�  //��ѭ��

int main()
{
	int i = 0;
	int k = 0;
	for (i = 0, k = 0; k = 0; i++, k++)//0��ֵ��k,�ñ��ʽΪ��
		k++;
	system("pause");
	return 0;
}