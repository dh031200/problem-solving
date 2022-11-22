#include <iostream>

using namespace std;

int main() {
	int i, j, l,T;
	int Testcase, k, n;
	int sum = 0;
	int total = 0;
	int num_n[15][15] = { 0 };

	cin >> Testcase;
	for (T = 0;T < Testcase;T++) {
		cin >> k >> n;
		for (i = 0; i <= k; i++) {
			for (j = 1; j <= n; j++) {
				if (num_n[i][j] != 0)
					continue;
				if (i != 0) {
					for (l = 1;l <= j;l++) {
						num_n[i][j] += num_n[i - 1][l];
					}
				}
				else
					num_n[i][j] += j;
			}
		}
		cout << num_n[k][n] << '\n';
	}
	return 0;
}