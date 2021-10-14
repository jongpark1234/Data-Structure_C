#include <stdio.h>

int shellsort(int arr[], int n);

int main() { // 10개 데이터를 쉘 정렬하는 법을 말해보자.
	int arr[] = { 1, 9, 15, 12, 3, 7, 5, 8, 11, 2 };
	int n = sizeof(arr) / sizeof(int);

	printf("%d개 데이터 정렬\n", n);
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
	} // 문제 gap 이 5 일 때 ( 첫 번째 수행 시 ) 배열 내 숫자들의 이동상황을 적으시오
}