#pragma warning(disable:4996)
#include <stdio.h>

int queue[5];
void menuf()
{
	printf("\n1.ť�� ����\t2.ť���� ����\t3.���� ����\t4.����\n\n");
}

void Enqueue(int* back, int item) {
	if (*back == 4)
	{
		printf("\nť�� ���� �� ! \n");
		return;
	}
	queue[++ * back] = item;
}

int Dequeue(int* front, int back) { 
	if (*front == back) { 
		return -1; 
		
	}

	return queue[++ * front];
}

void Display(int front, int back)
{
	if (back == -1) {
		printf("\nť�� ����� ! \n");
	}
	else {
		printf("\n");
		for (int i = front + 1; i <= back; i++) {
			printf("%d ", queue[i]);
		}
		printf("\n"); 
	}
}

main()
{
	int front = -1, back = -1, menu, item;

	while (1)
	{
		menuf();
		scanf("%d", &menu);

		switch (menu) {
		case 1:
			printf("\n");
			scanf("%d", &item);
			Enqueue(&back, item);
			break;
		case 2:
			item = Dequeue(&front, back);
			if (item == -1)
				printf("\nť�� �����\n");
			else
				printf("\n%d(��)�� ������\n", item);
			break;
		case 3:
			Display(front, back);
			break;
		case 4:
			printf("\n���α׷��� �����մϴ�.\n");
			return 0;
		default:
			printf("\n�ٽ� �Է����ּ���.\n");
		}
	}
}