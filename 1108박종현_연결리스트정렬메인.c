#include <stdio.h>
#include "연결리스트.h"

int MySort(int n1, int n2) {
	if (n1 < n2) 
		return 0;
	else
		return 1;
}

int main()
{
	List list;
	int data;
	ListInit(&list);
	SetSortRule(&list, MySort);

	LInsert(&list, 1);	LInsort(&list, 1);
	LInsert(&list, 2);	LInsort(&list, 2);
	LInsert(&list, 3);	LInsort(&list, 1);
	LInsert(&list, 7);	LInsort(&list, 6);

	printf("현재 데이터의 수 : %d\n", LCount(&list));

	if (LFirst(&list, &data)) {
		printf("%d ", data);
		while (LNext(&list, &data))
			printf("%d ", data);
	}

	printf("\n\n");

	if (LFirst(&list, &data)) {
		if (data == 2)
			LRemove(&list);
		while (LNext(&list, &data)) {
			if (data == 2)
				LRemove(&list);
		}
	}

	printf("현재 데이터의 수 : %d\n", LCount(&list));

	if (LFirst(&list, &data)) {
		printf("%d ", data);
		while (LNext(&list, &data))
			printf("%d ", data);
	}

	printf("\n\n");
	return 0;
}