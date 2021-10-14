#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


int factorial(int c)
{
	return ((c == 0) ? 1 : c * factorial(c - 1));
}

int main()
{
	printf(factorial(10));

	return 0;
}