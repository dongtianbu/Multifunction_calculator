#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "calculation.h"
#include <windows.h>
//菜单
void menu()
{
	printf("----------------多功能计算器----------------\n");
	printf("   1.四则运算                 2.平方根运算\n");
	printf("   3.立方根运算               4.幂运算运算\n");
	printf("   5.对数运算                 6.复数运算\n");
	printf("   0.退出程序                          \n");
	printf("--------------------------------------------\n");
}

int main()
{
	int flag = 9;
	int clear = 0;

	do
	{
		menu();
		printf("请选择你需要的功能：");
		if (scanf("%d", &flag) == 1)
		{
			if (flag == 1 || flag == 2 || flag == 3 || flag == 4 || flag == 5 || flag == 6)
			{
				switch (flag)
				{
				case 1:
					Four_arithmetic();
					break;
				case 2:
					Presquare_arithmetic();
					break;
				case 3:
					Cube_arithmetic();
					break;
				case 4:
					Power_operations();
					break;
				case 5:
					logarithm();
					break;
				case 6:
					Complex_arithmetic();
					break;
				default:
					break;
				}
			}
			else if (flag == 0)
			{
				printf("成功退出！");
			}
			else
			{
				//flag = 999;
				printf("请输入正确的数字来选择现有的功能！\n");
				printf("\n");
				clear++;
				if (clear == 3)
				{
					system("cls");  //选错三次清屏
					clear = 0;
				}
			}
		}
		else
		{
			while (getchar() != '\n');
			printf("输入无效，请重新选择:\n");
		}
	} while (flag);

	return 0;
}