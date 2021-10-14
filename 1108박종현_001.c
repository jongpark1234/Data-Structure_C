#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

static int i = 7;

void func1();
void func2();

int main()
{
	int i = 5;
	func1();
	i++;
	printf("i = %d\n", i);
}

void func1()
{
	i++;
	printf("func1 i =  %d \n", i);
	func2();
}

void func2()
{
	i++;
	printf("func2 i = %d \n", i);
}