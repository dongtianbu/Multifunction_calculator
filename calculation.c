#define _CRT_SECURE_NO_WARNINGS
#include <math.h>
#include <stdio.h>
#include <complex.h>
//四则运算
void Four_arithmetic(void)
{
	int num1, num2, flag = 0;
	printf("你已进入四则运算功能！\n");
	printf("请直接输入两个数，无需运算符号（用空格隔开）：");
	scanf("%d %d", &num1, &num2);
	if (num2 == 0)
	{	
		printf("相加：%-15.3f相减：%-15.3f相乘：%-15.3f除数为0，无意义\n", (double)(num1 + num2), (double)(num1 - num2),
				(double)(num1 * num2));

	}
	else if (num2 != 0)
	{
		printf("相加：%-15.3相减：f%-15.3f相乘：%-15.3f相除：%-15.3f\n", (double)(num1 + num2), (double)(num1 - num2),
			(double)(num1 * num2), (double)num1 / num2);
	}
}
//开方运算
void Presquare_arithmetic()
{
	double num, result = 0;

	printf("你已进入开平方根功能!\n");
	printf("请输入被开方数：");
	scanf("%lf", &num); 

	do
	{
		if (num < 0)
		{
			printf("请输入大于0的数：");
			scanf("%lf", &num);
			if (num >= 0)
			{
				result = sqrt(num);
				printf("结果是：%.3f\n", result);
			}
		}
		else
		{
			result = sqrt(num);
			printf("结果是：%.3f\n", result);
		}

	} while (num < 0);                                 //^^^^^^^^double类型数据的输入需要用%lf
	
}
//立方根运算
void Cube_arithmetic()
{
	double num, result = 0;

	printf("你已进入开立方根功能!\n");
	printf("请输入你要开立方根的数：");
	scanf("%lf", &num);
	if (num < 0)
	{
		num = abs(num);
		result = pow(num, 1.0 / 3);
		printf("它的立方根是：-%.3f\n", result);
	}
	else
	{
		result = pow(num, 1.0 / 3);
		printf("它的立方根是：%.3f\n", result);
	}
}

//幂运算
void Power_operations()
{
	double num1, num2, result = 0;
	int i = 0;
	printf("你已进入幂运算功能!\n");
	printf("请输入你要进行幂运算的数以及幂次（用空格隔开）：");
	scanf("%lf %lf", &num1, &num2);
	int temp = num2;
	if (num1 > 0)                                    //判断是否是正数，负数无法开偶次
	{
		result = pow(num1, num2);                   //正数直接开
		printf("结果是：%.3f\n", result);
	}
	else if (num1 < 0)                               //如果是负数
	{
		int judge = 0;                           
		judge = temp % 2;                             //不能开偶次,先判断num2是不是偶数
		
		do
		{
			judge = temp % 2;
			if (judge == 0)                             //是偶数
			{
				printf("数学错误，请重新输入：");
				printf("temp=%d\n", temp);
				scanf("%lf %lf", &num1, &num2);
			}
			else
			{
				result = pow(num1, num2);
				printf("结果是：%.3f\n", result);
				printf("temp=%d\n", temp);
			}
		} while (judge == 0);
		
	}
	
}
//对数运算
void logarithm()
{
	int flag = 0;
	double num, result = 0;
	printf("你已进入对数运算功能!\n");
	printf("请选择底数(选择序号)：\n1.10\n2.自然常数e\n");
	scanf("%d", &flag);
	if (flag == 1)
	{
		printf("请输入一个数：");
		scanf("%lf", &num);
		if (num <= 0)
		{
			printf("数学错误，退出程序！\n");
		}
		else
		{
			result = log10(num);
			printf("它的对数是：%.3f\n", result);
		}
	}
	else if (flag == 2)
	{
		printf("请输入一个数：");
		scanf("%lf", &num);
		if (num <= 0)
		{
			printf("数学错误，退出程序！\n");
		}
		else
		{
			result = log(num);
			printf("它的对数是：%.3f\n", result);
		}
		
	}
	else
	{
		printf("请输入正确的选择！\n");
		printf("已退出！\n");
		while (getchar() != '\n'); //清空缓冲区
	}
}

//复数运算
void Complex_arithmetic()
{
	int flag = 0;
	double result = 0;
	//定义一个复数结构体
	typedef struct
	{
		double real;
		double imag;
	}complex_r;
	complex_r z[20] = {0};
	
	printf("你已进入复数计算功能！\n");
	printf("你要进行什么运算？\n");
	printf("1.复数四则运算        2.复数求模\n");
	scanf("%d", &flag);
	switch (flag)
	{
	case 1:
		printf("请输入第一个复数的实部与虚部（用空格隔开）：");
		scanf("%lf %lf", &z[1].real, &z[1].imag);
		printf("请输入第二个复数的实部与虚部（用空格隔开）：");
		scanf("%lf %lf", &z[2].real, &z[2].imag);
		printf("相加是：%.3f + %.3fi\n", z[1].real + z[2].real, z[1].imag + z[2].imag);
		printf("相减是：%.3f + %.3fi\n", z[1].real - z[2].real, z[1].imag - z[2].imag);
		printf("相乘是：%.3f + %.3fi\n", z[1].real * z[2].real - z[1].imag * z[2].imag, z[1].real * z[2].imag + z[1].imag * z[2].real);
		printf("相除是：%.3f + %.3fi\n", (z[1].real* z[2].real + z[1].imag * z[2].imag) / (z[2].real* z[2].real + z[2].imag* z[2].imag), 
			                         (z[1].imag * z[2].real - z[1].real* z[2].imag) / (z[2].real * z[2].real + z[2].imag * z[2].imag));

		break;
	case 2:
		printf("请输入复数的实部与虚部（用空格隔开）：");
		scanf("%lf %lf", &z[3].real, &z[3].imag);
		result = sqrt((z[3].real * z[3].real + z[3].imag * z[3].imag));
		printf("模长：%.3f\n", result);
		break;
	default:
		break;
	}
}