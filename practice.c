#include<stdio.h>
#include<locale.h>
#include<stdlib.h>
int process(float a, float b, float x1, float y1, float x2, float y2);
int main(void)
{
	float a, b, x1, y1, x2, y2;
	setlocale(LC_ALL, "Russian");
	printf("введите a и b к уравнению прямой (a*x + b = y)\n");
	scanf_s("%f%f", &a, &b);
	printf("введите концы отрезка (x1, y1 , x2, y2)\n");
	scanf_s("%f%f%f%f", &x1, &y1, &x2, &y2);
	printf("вот ваши значения:\n уравнение прямой (%f*x) + (%f) = y \n отрезок с концами (%f, %f) ; (%f, %f) \n", a, b, x1, y1, x2, y2);
	process(a, b, x1, y1, x2, y2);
	return 0;
}
int process(float a, float b, float x1, float y1, float x2, float y2)
{
	float proc1 = a * x1 - 1 * y1 + b;
	float proc2 = a * x2 - 1 * y2 + b;
	if (a * x1 + b == y1 && a * x2 + b == y2)
	{
		printf("прямая и отрезок совпадают");
		return 0;
	}
	if (proc1 * proc2 >= 0)
		printf("прямая и отрезок не пересекаются");
	else	
		printf("прямая и отрезок пересекаются");
}
