#include <stdio.h>
#define N 10
long combi(int, int);

int main() {
	int n, r, t;
	for (n = 0; n <= N; n++) {
		for (t = 0; t < (N - n) * 3; t++)
			printf(" ");
		for (r = 0; r <= n; r++)
			printf("%3d   ", combi(n, r));
		printf("\n");
	}
	
	return 0;
}

long combi(int n, int r) {
	int i;
	long p = 1;
	for (int i = 1; i <= r; i++)
		p = p * (n - i + 1) / i;
	return p;
}