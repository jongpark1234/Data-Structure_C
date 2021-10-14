#pragma warning(disable:4996)
#include <stdio.h>
#define SWAP(x,y,t) ((t) = (x), (x) = (y), (y) = (t)) 

int arr[10] = { 1, 10, 5, 8, 7, 6, 4, 3, 2, 9 };
int n = 10;

void quicksort(int arr[], int left, int right) {
	if (left >= right) { 
		return;
	}
	int pivot = left;
	int i = left + 1;
	int j = right;
	int temp;

	while (i <= j) {
		while (arr[i] <= arr[pivot]) 
			i++;
		while (arr[j] >= arr[pivot]) 
			j--;
		if (i > j) 
			SWAP(arr[j], arr[pivot], temp);
		else { 
			SWAP(arr[i], arr[j], temp);
		}
	}
	quicksort(arr, left, j - 1); 
	quicksort(arr, j + 1, right); 
}

main() {
	quicksort(arr, 0, n - 1); 
	for (int i = 0; i < n; i++) {
		printf("%3d", arr[i]);
	}
	return 0;
}