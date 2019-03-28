#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <locale.h>
#include <math.h>

/*
	1. Ввести вес и рост человека. Рассчитать и вывести индекс массы тела по формуле I=m/(h*h); 
	где m-масса тела в килограммах, h - рост в метрах.
	2. Найти максимальное из четырех чисел. Массивы не использовать.
	3. Написать программу обмена значениями двух целочисленных переменных:
	a. с использованием третьей переменной;
	b. *без использования третьей переменной.

	4. Написать программу нахождения корней заданного квадратного уравнения.
	5. С клавиатуры вводится номер месяца. Требуется определить, к какому времени года он относится.
	6. Ввести возраст человека (от 1 до 150 лет) и вывести его вместе с последующим словом «год», «года» или «лет».
	7. С клавиатуры вводятся числовые координаты двух полей шахматной доски (x1,y1,x2,y2). Требуется определить, 
	относятся ли к поля к одному цвету или нет.
	8. Ввести a и b и вывести квадраты и кубы чисел от a до b.
	9. Даны целые положительные числа N и K. Используя только операции сложения и вычитания, найти частное 
	от деления нацело N на K, а также остаток от этого деления.
	10. Дано целое число N (> 0). С помощью операций деления нацело и взятия остатка от деления определить, 
	имеются ли в записи числа N нечетные цифры. Если имеются, то вывести True, если нет — вывести False.
	11. С клавиатуры вводятся числа, пока не будет введен 0. Подсчитать среднее арифметическое всех 
	положительных четных чисел, оканчивающихся на 8.
	12. Написать функцию нахождения максимального из трех чисел.
	13. * Написать функцию, генерирующую случайное число от 1 до 100.
	с использованием стандартной функции rand()
	без использования стандартной функции rand()

	14. * Автоморфные числа. Натуральное число называется автоморфным, если оно равно последним цифрам 
	своего квадрата. Например, 25 \ :sup: 2 = 625. Напишите программу, которая вводит натуральное число N 
	и выводит на экран все автоморфные числа, не превосходящие N.
	Записывайте в начало программы условие и свою фамилию. Все решения создавайте в одной программе. 
	Со звёздочками выполняйте в том случае, если вы решили задачи без звёздочек.
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
				printf("Неверный ввод!!!\n");
		}
	} while (TaskNumber!=0);

	system("pause");
	return 0;
}

void menu()
{
	printf("Введите номер задачи\n");
}

//1. Ввести вес и рост человека. Рассчитать и вывести индекс массы тела по формуле I=m/(h*h); 
void solution1()
{
	printf("1. Определение индекса массы человека\n");
	float Weight;
	float Height;
	printf("Введите Вес человека в кг:\n");
	scanf("%f", &Weight);
	printf("Введите Рост человека в м:\n");
	scanf("%f", &Height);

	float Index = Weight / (Height * Height);

	printf("Индекс массы тела человека равен: %f\n", Index);
	
	system("pause");
}

//2. Найти максимальное из четырех чисел.Массивы не использовать.
void solution2()
{
	printf("2. Метод определения максимального значения\n");
	float number1 = 0;
	float number2 = 0;
	float number3 = 0;
	float number4 = 0;
	float temp1;
	float temp2;

	printf("Введите Число 1:\n");
	scanf("%f", &number1);
	printf("Введите Число 2:\n");
	scanf("%f", &number2);
	printf("Введите Число 3:\n");
	scanf("%f", &number3);
	printf("Введите Число 4:\n");
	scanf("%f", &number4);

	temp1 = number1 >= number2 ? number1 : number2;
	temp2 = number3 >= number4 ? number3 : number4;
	temp1 = temp1 >= temp2 ? temp1 : temp2;
	printf("Большее число: %f\n", temp1);
	system("pause");
}

/*3. Написать программу обмена значениями двух целочисленных переменных:
a.с использованием третьей переменной;
b. *без использования третьей переменной.*/
void solution3()
{
	printf("3. Метод обмена значениями\n");
	int answer = 0;
	int number1 = 0;
	int number2 = 0;
	int temp;
	printf("Введите целое Число 1:\n");
	scanf("%i", &number1);
	printf("Введите целое Число 2:\n");
	scanf("%i", &number2);


	printf("Введите Число способ обмена чисел, 1 - с использованием третьей переменной, 2 - без использования третьей переменнной:\n");
	scanf("%i", &answer);

	if (answer == 1)
	{
		printf("Данные до обмена.\n");
		printf("Число 1: %i; ", number1);
		printf("Число 2: %i\n", number2);

		if (number1 != number2)
		{
			temp = number2;
			number2 = number1;
			number1 = temp;
		}		

		printf("Данные после обмена.\n");
		printf("Число 1: %i; ", number1);
		printf("Число 2: %i\n", number2);
	}
	if (answer == 2)
	{
		printf("Данные до обмена.\n");
		printf("Число 1: %i; ", number1);
		printf("Число 2: %i\n", number2);

		if (number1 != number2)
		{
			number1 = number1 ^ number2;
			number2 = number2 ^ number1;
			number1 = number1 ^ number2;
		}

		printf("Данные после обмена.\n");
		printf("Число 1: %i; ", number1);
		printf("Число 2: %i\n", number2);
	}
	system("pause");

}

//4. Написать программу нахождения корней заданного квадратного уравнения.
void solution4()
{
	printf("4. Определение квадратного уравнения\n");
	printf("4. a*x^2 + b*x + c = 0\n");

	float a = 0;
	float b = 0;
	float c = 0;
	float D;
	float x1, x2;

	printf("Введите a:\n");
	scanf("%f", &a);
	printf("Введите b:\n");
	scanf("%f", &b);
	printf("Введите c:\n");
	scanf("%f", &c);

	D = b * b - 4 * a*c;
	if (D>0)
	{
		printf("Два корня уравнения\n");
		x1 = ((-1)*b +  sqrt(D))/ (2 * a);
		x2 = ((-1)*b - sqrt(D)) / (2 * a);
		printf("Корень x1: %f\n", x1);
		printf("Корень x2: %f\n", x2);
	}
	if (D==0)
	{
		printf("Один корень уравнения\n");
		x1 = (-1)*b / (2 * a);
		printf("Корень уравнения: %f\n", x1);
	}
	if (D<0)
	{
		printf("Корней уравнения нет!!!\n");
	}

	system("pause");
}

//5. С клавиатуры вводится номер месяца. Требуется определить, к какому времени года он относится.
void solution5()
{
	printf("5. Определение времени года\n");
	int month = 0;
	char *months[12] = {"Январь", "Февраль", "Март", "Апрель", "Май", "Июнь", "Июль", "Август", "Сентябрь", "Октябрь", "Ноябрь", "Декабрь"};
	printf("Введите номер месяца:\n");
	scanf("%i", &month);
	if (1>month&& month>12)
		printf("Такого месяца нет!!!\n");
	else
	{
		if (3 <= month && month <= 5)
			printf("Весна: %s\n", months[month-1]);
		if (6 <= month && month <= 8)
			printf("Лето: %s\n", months[month-1]);
		if (9 <= month && month <= 11)
			printf("Осень: %s\n", months[month-1]);
		if (12 == month || 1 == month || 2 == month)
			printf("Зима: %s\n", months[month-1]);
	}
	system("pause");
}

//6. Ввести возраст человека (от 1 до 150 лет) и вывести его вместе с последующим словом «год», «года» или «лет».
//Незакончил
void solution6()
{
	printf("6. Вывод возраста человека\n");
	int age = 0;
	
	scanf("%i", &age);
	if (age>=1 && age <=150)
	{
		if (age==1 || age == 21)
		{
			printf("%i Год\n", age);
		}
		if ((age >= 2 && age <= 4)||(age>=22&&age<24) )
		{
			printf("%i Года\n", age);
		}
		if ((age >= 5 && age <= 20)||(age>=25))
		{
			printf("%i Лет\n", age);
		}
	}
	system("pause");
}

//7. С клавиатуры вводятся числовые координаты двух полей шахматной доски (x1,y1,x2,y2). Требуется определить, 
//относятся ли к поля к одному цвету или нет.
void solution7()
{
	printf("7. Определение цвета шахматной доски!!\n");	

	int FirstNumberOfRow = 0;
	int FirstNumberOfColumn = 0;
	int FirstColumnIndex = 0;

	int SecondNumberOfRow = 0;
	int SecondNumberOfColumn = 0;
	int SecondColumnIndex = 0;

	int result1, result2;

	printf("Введите номер строки 1-го поля:\n");
	scanf("%i", &FirstNumberOfRow);	
	printf("Введите символ столбца 1-го поля:\n");
	scanf("%i", &FirstNumberOfColumn);	

	printf("Введите номер строки 2-го поля:\n");	
	scanf("%i", &SecondNumberOfRow);
	printf("Введите символ столбца 2-го поля:\n");
	scanf("%i", &SecondNumberOfColumn);	
		
	result1 = pow((-1), (FirstNumberOfRow + FirstNumberOfColumn -1));
	result2 = pow((-1), (SecondNumberOfRow + SecondNumberOfColumn - 1));

	if(result1 == result2)
		printf("Поля одного цвета\n");
	else
		printf("Поля разного цвета\n");
	system("pause");
}

//8. Ввести a и b и вывести квадраты и кубы чисел от a до b.
void solution8()
{
	printf("8. Вывод квадратов или кубов чисел в промежутке\n");
	int select = 0;
	int a, b, n;
	long result;

	printf("Введите начальную цифру:\n");
	scanf("%i", &a);
	printf("Введите конечную цифру:\n");
	scanf("%i", &b);
	printf("Для вывода кубов нажмите 1, квадратов нажмите 2:\n");
	scanf("%i", &select);
	if (select == 1) n = 3;	
	if (select == 2) n = 2;
	
	for (int i=a; i<=b; i++)
	{	
		result = i;
		if (n == 2) printf("Квадрат числа %i: %i\n", i, result*result);
		if (n == 3) printf("Квадрат числа %i: %i\n", i, result*result*result);		
	}
}

//9. Даны целые положительные числа N и K. Используя только операции сложения и вычитания, найти частное 
//от деления нацело N на K, а также остаток от этого деления.
void solution9()
{
	printf("9. Вывод частного и остатка от деления двух целых чисел\n");
	int N = 0;
	int K = 0;
	int balance = 0;
	int quotient = 0;
	printf("Введите первую цифру:\n");
	scanf("%i", &N);
	printf("Введите вторую цифру:\n");
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
		printf("Частное от деления: %i, остаток %i\n", quotient, balance);
	}
	system("pause");
}

//10. Дано целое число N(> 0).С помощью операций деления нацело и взятия остатка от деления определить,
//имеются ли в записи числа N нечетные цифры.Если имеются, то вывести True, если нет — вывести False.
void solution10()
{
	printf("10. Определение, имеется ли в последовательности нечетные цифры.\n");
	int N = 0;	
	int balance = 0;
	int quotient = 0;
	int HaveEvenNumber = 0;
	printf("Введите Многозначное число:\n");
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

