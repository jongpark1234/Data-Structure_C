#pragma warning(disable:4996)
#include <stdio.h>
#include <stdlib.h>
// �̺� Ž��, ���� Ž�� : ���ĵ� �迭 �� ������ ã��

int arr[100] = { 5, 7, 33, 66, 67, 88, 99, 120, 134, 156, 201 };
int n, k; // k�� ���� ã�� ����

int binarysearch(int s, int e, int* cnt) { // start end
	while (s <= e) {
		*cnt += 1;
		int m = (s + e) / 2; // m �� middle
		if (arr[m] == k)
			return m; // ã�� �迭�� �ε��� ( ��ġ )
		if (arr[m] > k)
			e = m - 1;
		else
			s = m + 1;
	}

	return -1; // �ᱹ ���ڸ� �� ã��
}

main() {
	int count = 0, value;
	printf("ã�� ���� �Է� : ");
	scanf("%d", &k);
	value = binarysearch(0, 10, &count) + 1;
	printf("%d��°����\n", count);
	if (value == 0)
		printf("��ã�ҽ��ϴ�.");
	else
		printf("%d�� ��ġ���� �߰�\n", value);
}
