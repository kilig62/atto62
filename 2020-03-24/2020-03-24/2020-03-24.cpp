#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<stdlib.h>


//编写代码，演示多个字符从两端移动，向中间汇聚
#include<string.h>
#include<windows.h>

int main()
{
	char arr1[] = "hello world...";
	char arr2[] = "##############";
	int left = 0;
	int right = strlen(arr1) - 1;

	printf("%s\n", arr2);

	//while循环
	while (left <= right)
	{
		Sleep(1000);
		arr2[left] = arr1[left];
		arr2[right] = arr1[right];

		left++;
		right--;
		printf("%s\n", arr2);
	}
	//for循环
	/*for (left = 0, right = strlen(src) - 1;
		left <= right;
		left++, right--)
	{
		Sleep(1000);
		arr2[left] = arr1[left];
		arr2[right] = arr1[right];
		printf("%s\n", target);
	}*/
	system("pause");
	return 0;
}


//编写代码实现，模拟用户登录情景，并且只能登录三次。
//（只允许输入三次密码，如果密码正确则提示登录成功，如果三次均输入错误，则退出程序）


#include<string.h>
int main()
{
	char psw[10] = "20200324";
	int i = 0;
	int j = 0;
	for (i = 0; i < 3; ++i);
	{
		printf("please input:");
		scanf("%s", psw);
		if (strcmp(psw, "password") == 0)
			return 0;
	}
	if (i == 3)
		printf("exit\n");
	else
		printf("log in\n");
	system("pause");
}



//猜数字游戏实现

#include<time.h>

void menu()
{
	printf("************************\n");
	printf("******   1.play   ******\n");
	printf("******   0.exit   ******\n");
	printf("************************\n");
}

void game()
{
	int random_num = rand() % 100 + 1;
	int input = 0;
	while (1)
	{
		printf("请输入猜的数字:");
		scanf("%d", &input);
		if (input > random_num)
		{
			printf("猜大了!\n");
		}
		else if (input < random_num)
		{
			printf("猜小了!\n");
		}
		else
		{
			printf("恭喜你，猜对了!\n");
			break;
		}
	}
}

int main()
{
	int input = 0;
	srand((unsigned)time(NULL));
	do
	{
		menu();
		printf("请选择:");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			break;
		default:
			printf("选择错误，请重新输入!\n");
			break;
		}
	} while (input);

	system("pause");
	return 0;
}