#include<cstdio>
int D[20000001]={0};
int main() {
	int N, i, t;
	scanf("%d", &N);
	for (i = 0;i < N;i++) {
		scanf("%d", &t);
		D[t + 10000000] += 1;
	}
	scanf("%d", &N);
	for (i = 0;i < N;i++) {
		scanf("%d", &t);
		printf("%d ", D[t + 10000000]);
	}
	printf("\n");
}