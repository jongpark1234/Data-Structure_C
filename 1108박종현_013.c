#pragma warning(disable:4996)
#include <stdio.h>
#define SIZE 5	// ���ÿ� ���� �� �ִ� �ִ� ������
void push(int); // ���ÿ��� ������ �� �� ����
void pop();		// ���ÿ��� ���̳� �� �� ����
void display(); // ���ÿ� �ִ� ������ �����ֱ�

int stack[SIZE];
int top = -1; // ���ÿ� ������ ��ġ

main()
{
	int val, choice;

	printf("\n---- Menu ----\n");

	while (1)
	{
		printf("\n1.push\t2.pop\t3.display\t4.exit  %d\n", top);
		printf("Choice : ");
		scanf("%d", &choice);

		switch (choice) {
		case 1: // ���ÿ� push
			printf("\n������ �Է� : ");
			scanf("%d", &val);
			push(val);
			break;
		case 2: // ���ÿ��� pop
			pop();
			break;
		case 3: // ���� ���� display
			display();
			break;
		case 4: // ���α׷� ���� exit
			return 0;
		default:
			printf("\n�ٽ� �Է��ϼ���.\n");
		}
	}

	return 0;
}

void push(int val)
{
	if (top == SIZE - 1) // top >= SIZE - 1
		printf("\n������ ���� ��!\n");
	else
		stack[++top] = val;
}

void pop()
{
	if (top == -1)
		printf("\n������ �����!\n");
	else {
		printf("\n%d ��(��) �����Ǿ����ϴ�.\n", stack[top--]);
	}
}

void display()
{
	if (top == -1)
		printf("\n������ �����!\n");
	else
		printf("\nDIsplay : ");
	for (int i = top; i >= 0; i--)
		printf(" %d", stack[i]);
}