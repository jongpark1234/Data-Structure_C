#pragma warning(disable:4996)
#include <stdio.h>

int queue[5];
void menuf()
{
	printf("\n1.큐에 삽입\t2.큐에서 삭제\t3.내용 보기\t4.종료\n\n");
}

void Enqueue(int* back, int item) { // 큐에 삽입
	if (*back == 4)
	{
		printf("\n큐가 가득 참 ! \n");
		return;
	}
	queue[++ * back] = item;
}

int Dequeue(int* front, int back) { // 큐에서 삭제
	if (*front == back) { // 큐가 비었을 시
		return -1; // -1이면 큐가 비었다고 생각
		//보통 0이 리턴되면 정상적인 종료
	}

	return queue[++ * front];
}

void Display(int front, int back)
{
	if (back == -1) {
		printf("\n큐가 비었음 ! \n");
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
				printf("\n큐가 비었음\n");
			else
				printf("\n%d(이)가 삭제됨\n", item);
			break;
		case 3:
			Display(front, back);
			break;
		case 4:
			printf("\n프로그램을 종료합니다.\n");
			return 0;
		default:
			printf("\n다시 입력해주세요.\n");
		}
	}
}