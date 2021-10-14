#include <stdio.h>
#pragma warning(disable:4996)


typedef struct stu Stu; 

struct stu {
	char name[10];
	int age;
	int score;
};

int main()
{
	Stu s1 = { "KIM", 17, 90 };
	Stu s2 = { "PARK", 17, 80 };


	puts(s1.name);
	printf("%d\n", s1.age);
	printf("%d\n", s1.score);
} 