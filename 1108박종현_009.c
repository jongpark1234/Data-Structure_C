#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#pragma warning(disable:4996)

typedef struct stu {
	char name[10];
	int age;
}stu;

int main()
{
	stu* student;
	student = (stu*)malloc(sizeof(stu));
	strcpy(student->name, "JONGPARK");
	student->age = 17;

	printf("%s %d", student->name, student->age);

	free(student);
	return 0;

}