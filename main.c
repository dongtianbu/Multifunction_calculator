#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "calculation.h"
#include <windows.h>
//�˵�
void menu()
{
	printf("----------------�๦�ܼ�����----------------\n");
	printf("   1.��������                 2.ƽ��������\n");
	printf("   3.����������               4.����������\n");
	printf("   5.��������                 6.��������\n");
	printf("   0.�˳�����                          \n");
	printf("--------------------------------------------\n");
}

int main()
{
	int flag = 9;
	int clear = 0;

	do
	{
		menu();
		printf("��ѡ������Ҫ�Ĺ��ܣ�");
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
				printf("�ɹ��˳���");
			}
			else
			{
				//flag = 999;
				printf("��������ȷ��������ѡ�����еĹ��ܣ�\n");
				printf("\n");
				clear++;
				if (clear == 3)
				{
					system("cls");  //ѡ����������
					clear = 0;
				}
			}
		}
		else
		{
			while (getchar() != '\n');
			printf("������Ч��������ѡ��:\n");
		}
	} while (flag);

	return 0;
}