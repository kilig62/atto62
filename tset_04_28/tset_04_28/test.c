#define _CRT_SECURE_NO_WARNINGS 1

//5λ�˶�Ա�μ���10��̨��ˮ����������������Ԥ�������� 
//Aѡ��˵��B�ڶ����ҵ���
//Bѡ��˵���ҵڶ���E����
//Cѡ��˵���ҵ�һ��D�ڶ�
//Dѡ��˵��C����ҵ���
//Eѡ��˵���ҵ��ģ�A��һ
//����������ÿλѡ�ֶ�˵����һ�룬����ȷ������������


#include<stdio.h>
#include<stdlib.h>

int main()
{
	int a = 0, b = 0, c = 0, d = 0, e = 0;
	for (a = 1; a <= 5; a++)
	{
		for (b = 1; b <= 5; b++)
		{
			for (c = 1; c <= 5; c++)
			{
				for (d = 1; d <= 5; d++)
				{
					for (e = 1; e <= 5; e++)
					{
						if (((b == 2) + (a == 3) == 1) &&
							((b == 2) + (e == 4) == 1) &&
							((c == 1) + (d == 2) == 1) &&
							((c == 5) + (d == 3) == 1) &&
							((e == 4) + (a == 1) == 1))
						{
							if (a*b*c*d*e == 120)
								printf(" a=%d\n b=%d\n c=%d\n d=%d\n e=%d\n", a, b, c, d, e);
							break;
						}
					}
				}
			}
		}
	}
	system("pause");
	return 0;
}



//�ձ�ĳ�ط�����һ��ıɱ��������ͨ���Ų�ȷ��ɱ�����ֱ�Ϊ4�� ���ɷ���һ��
//����Ϊ4�����ɷ��Ĺ���
//A˵��������
//B˵����C
//C˵����D
//D˵��C�ں�˵
//��֪3����˵���滰��1����˵���Ǽٻ�
//�����������Щ��Ϣ��дһ��������ȷ������˭������

#include<stdio.h>
#include<stdlib.h>

int main()
{
	int killer = 0;
	for (killer = 'A'; killer <= 'D'; killer++)
	{
		if (((killer != 'A') + (killer == 'C') + (killer == 'D') + (killer != 'D')) == 3)
		{
			printf("killer is %c\n", killer);
		}
	}
	system("pause");
	return 0;
}


//����Ļ�ϴ�ӡ������ǡ� 
//1
//1 1
//1 2 1
//1 3 3 1

#include<stdio.h>
#include<stdlib.h>
#define N 4

int main()
{
	int i;
	int j;
	int a[N][N];
	for (i = 0; i < N; i++)
	{
		a[i][0] = 1;
		a[i][i] = 1;
	}
	for (i = 2; i < N; i++)
	{
		for (j = 1; j < i; j++)
		{
			a[i][j] = a[i - 1][j - 1] + a[i - 1][j];
		}
	}
	for (i = 0; i < N; i++)
	{
		for (j = 0; j < (2 * N - 2 * i); j++)
		{
			printf(" ");
		}
		for (j = 0; j <= i; j++)
		{
			printf("%4d", a[i][j]);
		}
		printf("\n");
	}
	system("pause");
	return 0;
}