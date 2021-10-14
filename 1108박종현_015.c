#pragma warning(disable:4996)
#include <stdio.h>
#include <stdlib.h>
// 이분 탐색, 이진 탐색 : 정렬된 배열 속 데이터 찾기

int arr[100] = { 5, 7, 33, 66, 67, 88, 99, 120, 134, 156, 201 };
int n, k; // k는 내가 찾을 숫자

int binarysearch(int s, int e, int* cnt) { // start end
	while (s <= e) {
		*cnt += 1;
		int m = (s + e) / 2; // m 은 middle
		if (arr[m] == k)
			return m; // 찾은 배열의 인덱스 ( 위치 )
		if (arr[m] > k)
			e = m - 1;
		else
			s = m + 1;
	}

	return -1; // 결국 숫자를 못 찾음
}

main() {
	int count = 0, value;
	printf("찾을 숫자 입력 : ");
	scanf("%d", &k);
	value = binarysearch(0, 10, &count) + 1;
	printf("%d번째만에\n", count);
	if (value == 0)
		printf("못찾았습니다.");
	else
		printf("%d번 위치에서 발견\n", value);
}
