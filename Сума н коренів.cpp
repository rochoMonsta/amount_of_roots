#include <stdio.h>
#include <iostream>
#include <stdlib.h>
#include <ctime>
#include <math.h>
//Лабораторна робота №5 завдання №23 замість 10 завдання.
int vvid()
{
	int a = 0;
	printf("Enter hove much numbers you won't to get: ");
	scanf("%d", &a);
	return a;
}

void input_random_number(int mas[], int a)
{
	srand(time(NULL) | clock());
	for (int i = 0; i < a; i++)
	{
		mas[i] = 1 + rand() %999;
	}
}

void print_result(int mas[], int a)
{
	float sum = 0.0;
	for (int i = 0; i < a; i++)
	{
		if (i % 2 == 0)
		{
			printf("+ sqrt (%d)", mas[i]);
			sum += sqrt(mas[i]);
		}
		else
		{
			printf("- sqrt (%d)", mas[i]);
			sum -= sqrt(mas[i]);
		}
	}
	printf(" = %.02f", sum);
}

int main(void)
{
	int n = vvid();
	int *masuv;
	masuv = (int*)calloc(n + 1, sizeof(int));
	input_random_number(masuv, n);
	print_result(masuv, n);
	return 0;
}
