#include <stdio.h>
int C[10001] = { 0 };
int main() {
	int N, i, k;
	scanf("%d", &N);
	for (i = 0;i < N;i++) {
		scanf("%d", &k);
		C[k]++;
	}
	for (i = 1;i <= 10000; i++) {
		while (C[i]--) {
			printf("%d\n", i);
		}
	}
}