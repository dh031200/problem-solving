#include <iostream>

using namespace std;

int main() {
	int N, M, count = 0, i, Sum;
	int num[6];
	cin >> N;
	M = N;
	while (M > 1) {
		M /= 10;
		count += 1;
	}
	for (i = 0; i < count * 9; i++) {
		M = N - count * 9 + i;
		Sum = M;
		while (M > 0) {
			Sum += M % 10;
			M /= 10;
		}
		if (Sum == N) {
			cout << N - count * 9 + i << '\n';
			return 0;
		}
	}
	cout << 0 << '\n';
	return 0;
}