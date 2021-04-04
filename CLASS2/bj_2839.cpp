#include <iostream>

using namespace std;

int main() {
	int N, i, j;
	int T = 0, F = 0;
	int minimum = 9999;
	cin >> N;

	for (i = 0;i <= 1000;i++) {
		F = 5 * i;
		for (j = 0;j < 5;j++) {
			T = 3 * j;
			if ((F + T) == N)
				if ((i + j) < minimum)
					minimum = (i + j);
		}
	}
	if (minimum == 9999)
		minimum = -1;
	cout << minimum << '\n';
	return 0;
}