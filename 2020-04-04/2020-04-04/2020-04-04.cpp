#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<stdlib.h>

//汉诺塔问题
void Hanoi(int n, char a, char b, char c)
{
	if (n > 0)
	{
		Hanoi(n - 1, a, c, b);
		printf("%d:%c--->%c\n", n, a, c);
		Hanoi(n - 1, b, a, c);
	}
}

int main()
{
	int n;
	scanf("%d", &n);
	Hanoi(n, 'a', 'b', 'c');

	system("pause");
	return 0;
}

//青蛙跳台阶问题
int Frog_Jump(int num)
{
	if (num <= 0)
	{
		return 0;
	}
	else if (num == 1)
	{
		return 1;
	}
	else if (num==2)
	{
		return 2;
	}

	return Frog_Jump(num - 1) + Frog_Jump(num - 2);
}

int main()
{
	int num = 0;
	printf("请输入青蛙要跳的台阶数：");
	scanf("%d", &num);
	printf("%d\n", Frog_Jump(num));

	system("pause");
	return 0;
}


