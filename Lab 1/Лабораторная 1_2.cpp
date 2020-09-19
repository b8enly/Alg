#include <stdio.h>
#include <math.h>
#include <iostream>
#include <windows.h>
#include "locale"
#include "string"
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian"); //установка русского языка
	float a, b, c, x1, x2; //объявление переменных
	char s[1000 + 1]; //задаем массив, состоящий из переменных char (строка по факту)
	printf("Enter variables a, b and c for the quadratic equation (standart form ax^2 + bx + c)\n");
	gets_s(s); //ввод первой переменной
	a = atof(s); //преобразование переменной из типа char в тип float 
	gets_s(s); //те же операции с оставшимися двумя переменными
	b = atof(s);
	gets_s(s);
	c = atof(s);
	float d;
	d = b * b - 4 * a * c; //вычисление дискриминанта
	if (d < 0)
	{
		printf("There is no solution");
	}
	if (d >= 0)
	{
		x1 = ((-b - sqrt(d)) / (2 * a)); //вычисление корней уравнения
		x2 = ((-b + sqrt(d)) / (2 * a));
		printf("%g %g", x1, x2);
		printf("\n");
	}
	if (a == 0) //постановка условия, при котором корнем уравнения является любое число
	{
		if (b == 0)
		{
			printf("x is any number");
		}
	}
	return 0;
}
