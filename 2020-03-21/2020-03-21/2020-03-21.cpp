#define _CRT_SECURE_NO_WARNINGS 1


#include<stdio.h>
#include<stdlib.h>

//int main()
//{
//	int i = 10;
//	do
//	{
//		printf("%d\n", i);
//	} while (i < 10);
//
//		system("pause");
//	return 0;
//}

//��ϰ
//1.����n�Ľ׳�

//int main()
//{
//	int n = 0;
//	int i = 1;
//	int ret = 1;
//	scanf("%d", &n);
//	while (i <= n)
//	{
//		ret *= i;
//		i++;
//	}
//	printf("ret=%d\n", ret);
//
//	system("pause");
//	return 0;
//}


//2.����1!+2!+3!+...+10!

//int main()
//{
//	int i = 1;
//	int n = 1;
//	int ret = 1;
//	int sum = 0;
//	scanf("%d", &n);
//	for (i = 1; i <= n; i++)
//	{
//		ret *= i;
//		sum = sum + ret;
//	}
//	printf("%d\n", sum);
//
//	system("pause");
//	return 0;
//}


//#include<string.h>
//int main()
//{
//	char input[10] = { 0 };
//	system("shutdown -s -t 60");
//again:
//	printf("���Խ���1�����ڹػ���������룺��������ȡ���ػ���\n�����룺");
//	scanf("%s", input);
//	if (0 == strcmp(input, "������"))
//	{
//		system("shutdown -a");
//	}
//	else
//	{
//		goto again;
//	}
//
//	system("pause");
//	return 0;
//}


//�۰�����㷨

int main()
{
	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	int left = 0;
	int right = sizeof(arr) / sizeof(arr[0]) - 1;//���Ԫ�ظ���
	int key = 7;
	int mid = 0;
	while (left <= right)
	{
		//mid = (left + right) / 2;//���ܻ����
		mid = left + (right - left) / 2;
		if (arr[mid] > key)
		{
			right = mid - 1;
		}
		else if (arr[mid] < key)
		{
			left = mid + 1;
		}
		else
			break;
	}
	if (left <= right)
		printf("�ҵ��ˣ��±���%d\n", mid);
	else
		printf("�Ҳ���\n");

	system("pause");
	return 0;
}