#define _CRT_SECURE_NO_WARNINGS
#include <math.h>
#include <stdio.h>
#include <complex.h>
//��������
void Four_arithmetic(void)
{
	int num1, num2, flag = 0;
	printf("���ѽ����������㹦�ܣ�\n");
	printf("��ֱ������������������������ţ��ÿո��������");
	scanf("%d %d", &num1, &num2);
	if (num2 == 0)
	{	
		printf("��ӣ�%-15.3f�����%-15.3f��ˣ�%-15.3f����Ϊ0��������\n", (double)(num1 + num2), (double)(num1 - num2),
				(double)(num1 * num2));

	}
	else if (num2 != 0)
	{
		printf("��ӣ�%-15.3�����f%-15.3f��ˣ�%-15.3f�����%-15.3f\n", (double)(num1 + num2), (double)(num1 - num2),
			(double)(num1 * num2), (double)num1 / num2);
	}
}
//��������
void Presquare_arithmetic()
{
	double num, result = 0;

	printf("���ѽ��뿪ƽ��������!\n");
	printf("�����뱻��������");
	scanf("%lf", &num); 

	do
	{
		if (num < 0)
		{
			printf("���������0������");
			scanf("%lf", &num);
			if (num >= 0)
			{
				result = sqrt(num);
				printf("����ǣ�%.3f\n", result);
			}
		}
		else
		{
			result = sqrt(num);
			printf("����ǣ�%.3f\n", result);
		}

	} while (num < 0);                                 //^^^^^^^^double�������ݵ�������Ҫ��%lf
	
}
//����������
void Cube_arithmetic()
{
	double num, result = 0;

	printf("���ѽ��뿪����������!\n");
	printf("��������Ҫ��������������");
	scanf("%lf", &num);
	if (num < 0)
	{
		num = abs(num);
		result = pow(num, 1.0 / 3);
		printf("�����������ǣ�-%.3f\n", result);
	}
	else
	{
		result = pow(num, 1.0 / 3);
		printf("�����������ǣ�%.3f\n", result);
	}
}

//������
void Power_operations()
{
	double num1, num2, result = 0;
	int i = 0;
	printf("���ѽ��������㹦��!\n");
	printf("��������Ҫ��������������Լ��ݴΣ��ÿո��������");
	scanf("%lf %lf", &num1, &num2);
	int temp = num2;
	if (num1 > 0)                                    //�ж��Ƿ��������������޷���ż��
	{
		result = pow(num1, num2);                   //����ֱ�ӿ�
		printf("����ǣ�%.3f\n", result);
	}
	else if (num1 < 0)                               //����Ǹ���
	{
		int judge = 0;                           
		judge = temp % 2;                             //���ܿ�ż��,���ж�num2�ǲ���ż��
		
		do
		{
			judge = temp % 2;
			if (judge == 0)                             //��ż��
			{
				printf("��ѧ�������������룺");
				printf("temp=%d\n", temp);
				scanf("%lf %lf", &num1, &num2);
			}
			else
			{
				result = pow(num1, num2);
				printf("����ǣ�%.3f\n", result);
				printf("temp=%d\n", temp);
			}
		} while (judge == 0);
		
	}
	
}
//��������
void logarithm()
{
	int flag = 0;
	double num, result = 0;
	printf("���ѽ���������㹦��!\n");
	printf("��ѡ�����(ѡ�����)��\n1.10\n2.��Ȼ����e\n");
	scanf("%d", &flag);
	if (flag == 1)
	{
		printf("������һ������");
		scanf("%lf", &num);
		if (num <= 0)
		{
			printf("��ѧ�����˳�����\n");
		}
		else
		{
			result = log10(num);
			printf("���Ķ����ǣ�%.3f\n", result);
		}
	}
	else if (flag == 2)
	{
		printf("������һ������");
		scanf("%lf", &num);
		if (num <= 0)
		{
			printf("��ѧ�����˳�����\n");
		}
		else
		{
			result = log(num);
			printf("���Ķ����ǣ�%.3f\n", result);
		}
		
	}
	else
	{
		printf("��������ȷ��ѡ��\n");
		printf("���˳���\n");
		while (getchar() != '\n'); //��ջ�����
	}
}

//��������
void Complex_arithmetic()
{
	int flag = 0;
	double result = 0;
	//����һ�������ṹ��
	typedef struct
	{
		double real;
		double imag;
	}complex_r;
	complex_r z[20] = {0};
	
	printf("���ѽ��븴�����㹦�ܣ�\n");
	printf("��Ҫ����ʲô���㣿\n");
	printf("1.������������        2.������ģ\n");
	scanf("%d", &flag);
	switch (flag)
	{
	case 1:
		printf("�������һ��������ʵ�����鲿���ÿո��������");
		scanf("%lf %lf", &z[1].real, &z[1].imag);
		printf("������ڶ���������ʵ�����鲿���ÿո��������");
		scanf("%lf %lf", &z[2].real, &z[2].imag);
		printf("����ǣ�%.3f + %.3fi\n", z[1].real + z[2].real, z[1].imag + z[2].imag);
		printf("����ǣ�%.3f + %.3fi\n", z[1].real - z[2].real, z[1].imag - z[2].imag);
		printf("����ǣ�%.3f + %.3fi\n", z[1].real * z[2].real - z[1].imag * z[2].imag, z[1].real * z[2].imag + z[1].imag * z[2].real);
		printf("����ǣ�%.3f + %.3fi\n", (z[1].real* z[2].real + z[1].imag * z[2].imag) / (z[2].real* z[2].real + z[2].imag* z[2].imag), 
			                         (z[1].imag * z[2].real - z[1].real* z[2].imag) / (z[2].real * z[2].real + z[2].imag * z[2].imag));

		break;
	case 2:
		printf("�����븴����ʵ�����鲿���ÿո��������");
		scanf("%lf %lf", &z[3].real, &z[3].imag);
		result = sqrt((z[3].real * z[3].real + z[3].imag * z[3].imag));
		printf("ģ����%.3f\n", result);
		break;
	default:
		break;
	}
}