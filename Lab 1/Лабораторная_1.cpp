#include <stdio.h>
#include <math.h>
#include <iostream>
#include <locale.h>
using namespace std;
int main() 
{
	setlocale(LC_ALL, "Russian");
	float a, b, c, x1, x2;
	printf("Enter variables a, b and c for the quadratic equation (standart form ax^2 + bx + c)\n");
	scanf_s("%f %f %f", &a, &b, &c);
	float d;
	d = b * b - 4 * a * c;
	if (d < 0)
	{
		printf("There is no solution");
	}
	if (d >= 0)
	{
		x1 = ((-b - sqrt(d)) / (2 * a));
		x2 = ((-b + sqrt(d)) / (2 * a));
		printf("%g %g", x1, x2);
		printf("\n");
	}
	if (a == 0)
	{
		if (b == 0)
		{
			printf("x is any number");
		}
	}
	return 0;
}