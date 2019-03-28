#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <locale.h>
#include <math.h>

/*
	1. ������ ��� � ���� ��������. ���������� � ������� ������ ����� ���� �� ������� I=m/(h*h); 
	��� m-����� ���� � �����������, h - ���� � ������.
	2. ����� ������������ �� ������� �����. ������� �� ������������.
	3. �������� ��������� ������ ���������� ���� ������������� ����������:
	a. � �������������� ������� ����������;
	b. *��� ������������� ������� ����������.

	4. �������� ��������� ���������� ������ ��������� ����������� ���������.
	5. � ���������� �������� ����� ������. ��������� ����������, � ������ ������� ���� �� ���������.
	6. ������ ������� �������� (�� 1 �� 150 ���) � ������� ��� ������ � ����������� ������ ����, ����� ��� ����.
	7. � ���������� �������� �������� ���������� ���� ����� ��������� ����� (x1,y1,x2,y2). ��������� ����������, 
	��������� �� � ���� � ������ ����� ��� ���.
	8. ������ a � b � ������� �������� � ���� ����� �� a �� b.
	9. ���� ����� ������������� ����� N � K. ��������� ������ �������� �������� � ���������, ����� ������� 
	�� ������� ������ N �� K, � ����� ������� �� ����� �������.
	10. ���� ����� ����� N (> 0). � ������� �������� ������� ������ � ������ ������� �� ������� ����������, 
	������� �� � ������ ����� N �������� �����. ���� �������, �� ������� True, ���� ��� � ������� False.
	11. � ���������� �������� �����, ���� �� ����� ������ 0. ���������� ������� �������������� ���� 
	������������� ������ �����, �������������� �� 8.
	12. �������� ������� ���������� ������������� �� ���� �����.
	13. * �������� �������, ������������ ��������� ����� �� 1 �� 100.
	� �������������� ����������� ������� rand()
	��� ������������� ����������� ������� rand()

	14. * ����������� �����. ����������� ����� ���������� �����������, ���� ��� ����� ��������� ������ 
	������ ��������. ��������, 25 \ :sup: 2 = 625. �������� ���������, ������� ������ ����������� ����� N 
	� ������� �� ����� ��� ����������� �����, �� ������������� N.
	����������� � ������ ��������� ������� � ���� �������. ��� ������� ���������� � ����� ���������. 
	�� ���������� ���������� � ��� ������, ���� �� ������ ������ ��� ��������.
*/

void menu();
void solution1();
void solution2();
void solution3();
void solution4();
void solution5();
void solution6();
void solution7();
void solution8();
void solution9();
void solution10();

int main()
{
	setlocale(LC_ALL, "Rus");

	int TaskNumber = 0;
	
	
	do
	{
		system("cls");
		menu();
		scanf("%i", &TaskNumber);
		switch (TaskNumber)
		{
			case 1:
				solution1();				
				break;
			case 2:
				solution2();				
				break;
			case 3:
				solution3();				
				break;
			case 4:
				solution4();
				break;
			case 5:
				solution5();
				break;
			case 6:
				solution6();
				break;
			case 7:
				solution7();
				break;
			case 8:
				solution8();
				break;
			case 9:
				solution9();
				break;
			case 10:
				solution10();
				break;
			default:
				printf("�������� ����!!!\n");
		}
	} while (TaskNumber!=0);

	system("pause");
	return 0;
}

void menu()
{
	printf("������� ����� ������\n");
}

//1. ������ ��� � ���� ��������. ���������� � ������� ������ ����� ���� �� ������� I=m/(h*h); 
void solution1()
{
	printf("1. ����������� ������� ����� ��������\n");
	float Weight;
	float Height;
	printf("������� ��� �������� � ��:\n");
	scanf("%f", &Weight);
	printf("������� ���� �������� � �:\n");
	scanf("%f", &Height);

	float Index = Weight / (Height * Height);

	printf("������ ����� ���� �������� �����: %f\n", Index);
	
	system("pause");
}

//2. ����� ������������ �� ������� �����.������� �� ������������.
void solution2()
{
	printf("2. ����� ����������� ������������� ��������\n");
	float number1 = 0;
	float number2 = 0;
	float number3 = 0;
	float number4 = 0;
	float temp1;
	float temp2;

	printf("������� ����� 1:\n");
	scanf("%f", &number1);
	printf("������� ����� 2:\n");
	scanf("%f", &number2);
	printf("������� ����� 3:\n");
	scanf("%f", &number3);
	printf("������� ����� 4:\n");
	scanf("%f", &number4);

	temp1 = number1 >= number2 ? number1 : number2;
	temp2 = number3 >= number4 ? number3 : number4;
	temp1 = temp1 >= temp2 ? temp1 : temp2;
	printf("������� �����: %f\n", temp1);
	system("pause");
}

/*3. �������� ��������� ������ ���������� ���� ������������� ����������:
a.� �������������� ������� ����������;
b. *��� ������������� ������� ����������.*/
void solution3()
{
	printf("3. ����� ������ ����������\n");
	int answer = 0;
	int number1 = 0;
	int number2 = 0;
	int temp;
	printf("������� ����� ����� 1:\n");
	scanf("%i", &number1);
	printf("������� ����� ����� 2:\n");
	scanf("%i", &number2);


	printf("������� ����� ������ ������ �����, 1 - � �������������� ������� ����������, 2 - ��� ������������� ������� �����������:\n");
	scanf("%i", &answer);

	if (answer == 1)
	{
		printf("������ �� ������.\n");
		printf("����� 1: %i; ", number1);
		printf("����� 2: %i\n", number2);

		if (number1 != number2)
		{
			temp = number2;
			number2 = number1;
			number1 = temp;
		}		

		printf("������ ����� ������.\n");
		printf("����� 1: %i; ", number1);
		printf("����� 2: %i\n", number2);
	}
	if (answer == 2)
	{
		printf("������ �� ������.\n");
		printf("����� 1: %i; ", number1);
		printf("����� 2: %i\n", number2);

		if (number1 != number2)
		{
			number1 = number1 ^ number2;
			number2 = number2 ^ number1;
			number1 = number1 ^ number2;
		}

		printf("������ ����� ������.\n");
		printf("����� 1: %i; ", number1);
		printf("����� 2: %i\n", number2);
	}
	system("pause");

}

//4. �������� ��������� ���������� ������ ��������� ����������� ���������.
void solution4()
{
	printf("4. ����������� ����������� ���������\n");
	printf("4. a*x^2 + b*x + c = 0\n");

	float a = 0;
	float b = 0;
	float c = 0;
	float D;
	float x1, x2;

	printf("������� a:\n");
	scanf("%f", &a);
	printf("������� b:\n");
	scanf("%f", &b);
	printf("������� c:\n");
	scanf("%f", &c);

	D = b * b - 4 * a*c;
	if (D>0)
	{
		printf("��� ����� ���������\n");
		x1 = ((-1)*b +  sqrt(D))/ (2 * a);
		x2 = ((-1)*b - sqrt(D)) / (2 * a);
		printf("������ x1: %f\n", x1);
		printf("������ x2: %f\n", x2);
	}
	if (D==0)
	{
		printf("���� ������ ���������\n");
		x1 = (-1)*b / (2 * a);
		printf("������ ���������: %f\n", x1);
	}
	if (D<0)
	{
		printf("������ ��������� ���!!!\n");
	}

	system("pause");
}

//5. � ���������� �������� ����� ������. ��������� ����������, � ������ ������� ���� �� ���������.
void solution5()
{
	printf("5. ����������� ������� ����\n");
	int month = 0;
	char *months[12] = {"������", "�������", "����", "������", "���", "����", "����", "������", "��������", "�������", "������", "�������"};
	printf("������� ����� ������:\n");
	scanf("%i", &month);
	if (1>month&& month>12)
		printf("������ ������ ���!!!\n");
	else
	{
		if (3 <= month && month <= 5)
			printf("�����: %s\n", months[month-1]);
		if (6 <= month && month <= 8)
			printf("����: %s\n", months[month-1]);
		if (9 <= month && month <= 11)
			printf("�����: %s\n", months[month-1]);
		if (12 == month || 1 == month || 2 == month)
			printf("����: %s\n", months[month-1]);
	}
	system("pause");
}

//6. ������ ������� �������� (�� 1 �� 150 ���) � ������� ��� ������ � ����������� ������ ����, ����� ��� ����.
//����������
void solution6()
{
	printf("6. ����� �������� ��������\n");
	int age = 0;
	
	scanf("%i", &age);
	if (age>=1 && age <=150)
	{
		if (age==1 || age == 21)
		{
			printf("%i ���\n", age);
		}
		if ((age >= 2 && age <= 4)||(age>=22&&age<24) )
		{
			printf("%i ����\n", age);
		}
		if ((age >= 5 && age <= 20)||(age>=25))
		{
			printf("%i ���\n", age);
		}
	}
	system("pause");
}

//7. � ���������� �������� �������� ���������� ���� ����� ��������� ����� (x1,y1,x2,y2). ��������� ����������, 
//��������� �� � ���� � ������ ����� ��� ���.
void solution7()
{
	printf("7. ����������� ����� ��������� �����!!\n");	

	int FirstNumberOfRow = 0;
	int FirstNumberOfColumn = 0;
	int FirstColumnIndex = 0;

	int SecondNumberOfRow = 0;
	int SecondNumberOfColumn = 0;
	int SecondColumnIndex = 0;

	int result1, result2;

	printf("������� ����� ������ 1-�� ����:\n");
	scanf("%i", &FirstNumberOfRow);	
	printf("������� ������ ������� 1-�� ����:\n");
	scanf("%i", &FirstNumberOfColumn);	

	printf("������� ����� ������ 2-�� ����:\n");	
	scanf("%i", &SecondNumberOfRow);
	printf("������� ������ ������� 2-�� ����:\n");
	scanf("%i", &SecondNumberOfColumn);	
		
	result1 = pow((-1), (FirstNumberOfRow + FirstNumberOfColumn -1));
	result2 = pow((-1), (SecondNumberOfRow + SecondNumberOfColumn - 1));

	if(result1 == result2)
		printf("���� ������ �����\n");
	else
		printf("���� ������� �����\n");
	system("pause");
}

//8. ������ a � b � ������� �������� � ���� ����� �� a �� b.
void solution8()
{
	printf("8. ����� ��������� ��� ����� ����� � ����������\n");
	int select = 0;
	int a, b, n;
	long result;

	printf("������� ��������� �����:\n");
	scanf("%i", &a);
	printf("������� �������� �����:\n");
	scanf("%i", &b);
	printf("��� ������ ����� ������� 1, ��������� ������� 2:\n");
	scanf("%i", &select);
	if (select == 1) n = 3;	
	if (select == 2) n = 2;
	
	for (int i=a; i<=b; i++)
	{	
		result = i;
		if (n == 2) printf("������� ����� %i: %i\n", i, result*result);
		if (n == 3) printf("������� ����� %i: %i\n", i, result*result*result);		
	}
}

//9. ���� ����� ������������� ����� N � K. ��������� ������ �������� �������� � ���������, ����� ������� 
//�� ������� ������ N �� K, � ����� ������� �� ����� �������.
void solution9()
{
	printf("9. ����� �������� � ������� �� ������� ���� ����� �����\n");
	int N = 0;
	int K = 0;
	int balance = 0;
	int quotient = 0;
	printf("������� ������ �����:\n");
	scanf("%i", &N);
	printf("������� ������ �����:\n");
	scanf("%i", &K);
	if (N >= K)
	{
		while (N>=K)
		{
			N = N - K;
			quotient++;
		}
		if (N>0)
		{
			balance = N;
		}
		printf("������� �� �������: %i, ������� %i\n", quotient, balance);
	}
	system("pause");
}

//10. ���� ����� ����� N(> 0).� ������� �������� ������� ������ � ������ ������� �� ������� ����������,
//������� �� � ������ ����� N �������� �����.���� �������, �� ������� True, ���� ��� � ������� False.
void solution10()
{
	printf("10. �����������, ������� �� � ������������������ �������� �����.\n");
	int N = 0;	
	int balance = 0;
	int quotient = 0;
	int HaveEvenNumber = 0;
	printf("������� ������������ �����:\n");
	scanf("%i", &N);
	
	while (N>10)
	{
		balance = N % 10;
		if (balance%2 > 0)
		{
			HaveEvenNumber = 1;
		}
		N = N / 10;
	}
	if (HaveEvenNumber == 1)
	{
		printf("\n");
	}
}

