#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


int factorial(int c)
{
	return ((c == 0) ? 1 : c * factorial(c - 1));
}

int fac(int c)
{
	if (c == 0)
	{
		return 1;
	}
	else
	{
		c = c * fac(c - 1);
	}
}

int factask(int c)
{
	int num = 1;

	for (int i = c; i > 0; i--)
	{
		num *= i;
	}

	return num;
}

int main()
{
	int n;

	printf("Factorial Input : ");
	scanf("%d", &n);

	for (int i = n; i > 0; i--)
	{
		printf("%d! = %d\n", i, factorial(i));
	}

	printf("%d", factask(n));

	return 0;
}