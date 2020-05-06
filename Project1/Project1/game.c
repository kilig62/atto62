#define _CRT_SECURE_NO_WARNINGS 1
#include "game.h"
void InitBoard(char board[ROWS][COLS], int rows, int cols, char set)
{
	for (int i = 0; i < rows; ++i)
	{
		for (int j = 0; j < cols; ++j)
		{
			board[i][j] = set;
		}
	}
}
void DisplayBoard(char board[ROWS][COLS], int row, int col)
{
	int i = 0;
	int j = 0;
	for (i = 0; i <= row; ++i)
	{
		printf("%d ", i);//横坐标
	}
	printf("\n");
	for (i = 1; i <= col; ++i)
	{
		printf("%d ", i);//纵坐标
		for (j = 1; j <= col; ++j)
		{
			printf("%c ", board[i][j]);
		}
		printf("\n");
	}
}
void SetMine(char mine[ROWS][COLS], int row, int col)//设置雷
{
	int count = EASY_COUNT;//设置10个雷
	while (count)
	{
		int x = 0;
		int y = 0;
		x = rand() % row + 1;
		y = rand() % col + 1;
		if (mine[x][y] == '0')//表示还没有设置雷
		{
			mine[x][y] = '1';
			count--;
		}
	}
}
int GetMineCount(char mine[ROWS][COLS], int x, int y)//获取坐标周围的雷的数量
{
	return mine[x - 1][y] +
		mine[x - 1][y - 1] +
		mine[x][y - 1] +
		mine[x + 1][y - 1] +
		mine[x + 1][y] +
		mine[x + 1][y + 1] +
		mine[x][y + 1] +
		mine[x - 1][y + 1] - 8 * '0';
}
void OpenMine(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col, int x, int y)//展开一片
{
	int ret = 0;
	ret = GetMineCount(mine, x, y);
	if (ret == 0)
	{
		show[x][y] = ' ';
		if (x > 0 && y + 1 <= col&&show[x][y + 1] == '*')
			OpenMine(mine, show, row, col, x, y + 1);
		if (x - 1 > 0 && y + 1 <= col && show[x - 1][y + 1] == '*')
			OpenMine(mine, show, row, col, x - 1, y + 1);
		if (x - 1 > 0 && y > 0 && show[x - 1][y] == '*')
			OpenMine(mine, show, row, col, x - 1, y);
		if (x - 1 > 0 && y - 1 > 0 && show[x - 1][y - 1] == '*')
			OpenMine(mine, show, row, col, x - 1, y - 1);
		if (x > 0 && y - 1 > 0 && show[x][y - 1] == '*')
			OpenMine(mine, show, row, col, x, y - 1);
		if (x + 1 <= row && y - 1 > 0 && show[x + 1][y - 1] == '*')
			OpenMine(mine, show, row, col, x + 1, y - 1);
		if (x + 1 <= row && y > 0 && show[x + 1][y] == '*')
			OpenMine(mine, show, row, col, x + 1, y);
		if (x + 1 <= row && y + 1 <= col&& show[x + 1][y + 1] == '*')
			OpenMine(mine, show, row, col, x + 1, y + 1);
	}
	else
		show[x][y] = GetMineCount(mine, x, y) + '0';
}
void First_SafeMine(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col)//保证第一个不踩雷
{
	int x = 0;
	int y = 0;
	int ret = 1;
	int count = 0;
	printf("请输入要排查的坐标:>");
	scanf("%d%d", &x, &y);
	if (mine[x][y] == '1')//如果有雷，改为没有雷
	{
		mine[x][y] = '0';
		count = GetMineCount(mine, x, y);
		show[x][y] = count + '0';
		while (ret)//随机生成一个雷
		{
			x = rand() % row + 1;
			y = rand() % col + 1;
			if (mine[x][y] == '0')
			{
				mine[x][y] = '1';
			}
			ret--;
		}
	}
	OpenMine(mine, show, row, col, x, y);
	DisplayBoard(show, row, col);
}
void FindMine(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col)//排雷
{
	int x = 0;
	int y = 0;
	int win = 0;
	while (win <= row*col - EASY_COUNT)//win小于不是雷的数量，说明还有雷
	{
		printf("请输入你要排查的坐标:>");
		scanf("%d%d", &x, &y);
		if (x >= 1 && x <= row&&y >= 1 && y <= col)
		{
			if (mine[x][y] == '1')
			{
				printf("有雷，你被炸死了!\n");
				DisplayBoard(mine, row, col);
				break;
			}
			else
			{
				int count = GetMineCount(mine, x, y);
				show[x][y] = count + '0';
				OpenMine(mine, show, row, col, x, y);
				DisplayBoard(show, row, col);
				win++;
			}
		}
		else
			printf("坐标非法!\n");
	}
	if (win == row*col - EASY_COUNT)
	{
		printf("恭喜你，排雷成功!\n");
		DisplayBoard(mine, row, col);
	}
}
void menu()
{
	printf("*******************************\n");
	printf("*******      1.play     *******\n");
	printf("*******      0.exit     *******\n");
	printf("*******************************\n");
}
void game()
{
	char mine[ROWS][COLS] = { 0 };
	char show[ROWS][COLS] = { 0 };
	InitBoard(mine, ROWS, COLS, '0');
	InitBoard(show, ROWS, COLS, '*');
	DisplayBoard(show, ROW, COL);
	SetMine(mine, ROW, COL);
	First_SafeMine(mine, show, ROW, COL);
	FindMine(mine, show, ROW, COL);
}
void TestFunc()
{
	int input = 0;
	srand((unsigned int)time(NULL));
	do
	{
		menu();
		printf("请选择:>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			break;
		default:
			break;
		}
	} while (input);
}

