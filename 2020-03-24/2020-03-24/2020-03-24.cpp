#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<stdlib.h>


//��д���룬��ʾ����ַ��������ƶ������м���
#include<string.h>
#include<windows.h>

int main()
{
	char arr1[] = "hello world...";
	char arr2[] = "##############";
	int left = 0;
	int right = strlen(arr1) - 1;

	printf("%s\n", arr2);

	//whileѭ��
	while (left <= right)
	{
		Sleep(1000);
		arr2[left] = arr1[left];
		arr2[right] = arr1[right];

		left++;
		right--;
		printf("%s\n", arr2);
	}
	//forѭ��
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


//��д����ʵ�֣�ģ���û���¼�龰������ֻ�ܵ�¼���Ρ�
//��ֻ���������������룬���������ȷ����ʾ��¼�ɹ���������ξ�����������˳�����


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



//��������Ϸʵ��

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
		printf("������µ�����:");
		scanf("%d", &input);
		if (input > random_num)
		{
			printf("�´���!\n");
		}
		else if (input < random_num)
		{
			printf("��С��!\n");
		}
		else
		{
			printf("��ϲ�㣬�¶���!\n");
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
		printf("��ѡ��:");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			break;
		default:
			printf("ѡ���������������!\n");
			break;
		}
	} while (input);

	system("pause");
	return 0;
}