#include <stdio.h>

int shellsort(int arr[], int n);

int main() { 
	int arr[] = { 1, 9, 15, 12, 3, 7, 5, 8, 11, 2 };
	int n = sizeof(arr) / sizeof(int);

	printf("%d�� ������ ����\n", n);
	shellsort(arr, n);
	for (int i = 0; i < n; i++) {
		printf("%4d", arr[i]);
	}
	printf("\n");
	return 0;
}

int shellsort(int arr[], int n) {
	int i, j, tmp, gap;
	for (gap = n / 2; gap > 0; gap /= 2) {
		for (i = gap; i < n; i++) {
			tmp = arr[i];
			for (j = i; j >= gap && arr[j - gap] > tmp; j -= gap) {
				arr[j] = arr[j - gap];
			}
			arr[j] = tmp;
		}
	}
}