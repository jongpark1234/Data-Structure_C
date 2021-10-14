#pragma warning(disable:4996)
#include <stdio.h>
#define SWAP(x,y,t) ((t) = (x), (x) = (y), (y) = (t)) // 매크로 SWAP

int arr[10] = { 1, 10, 5, 8, 7, 6, 4, 3, 2, 9 };
int n = 10;

void quicksort(int arr[], int left, int right) {
	if (left >= right) { // 정렬할 데이터 수가 1인 경우
		return;
	}
	int pivot = left;
	int i = left + 1;
	int j = right;
	int temp;

	while (i <= j) { // i가 j 이하일 때 까지
		while (arr[i] <= arr[pivot]) // i 위치의 값이 pivot 위치의 값 이하일 시
			i++;
		while (arr[j] >= arr[pivot]) // j 위치의 값이 pivot 위치의 값 이상일 시
			j--;
		if (i > j) // i와 j가 크로스 되었을 경우
			SWAP(arr[j], arr[pivot], temp);
		else { // i가 j보다 작은 경우는 피봇과 교체하지 않음.
			SWAP(arr[i], arr[j], temp);
		}
	}
	quicksort(arr, left, j - 1); // 피봇으로 쪼개어진 왼쪽 부분 호출
	quicksort(arr, j + 1, right); // 피봇 기준 오른쪽 호출
}

main() {
	quicksort(arr, 0, n - 1); // left : 0, right : n - 1 ( 배열 인덱스 )
	for (int i = 0; i < n; i++) {
		printf("%3d", arr[i]);
	}
	// 퀵 정렬 시간복잡도 O(NlogN), 평균 속도
	// 퀵 정렬 시간복잡도 O(N^2)인 경우, 최악의 경우
	// 1, 2, 3, 4, 5
	return 0;
}