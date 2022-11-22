#include <iostream>
#include <cmath>
using namespace std;

int main() {
	int i,j,k, N, M;;
	int Sum, result=0;
	int deck[100];
	int min = 300001;
	cin >> N >> M;
	
	for (i = 0;i < N;i++) {
		cin >> deck[i];
	}
	for (i = 0; i < N; i++) {
		for (j = i + 1;j < N;j++) {
			Sum = 0;
			for (k = j + 1;k < N;k++) {
				Sum = deck[i] + deck[j] + deck[k];
				if (M-Sum >= 0 && M - Sum < min) {
					min = abs(M - Sum);
					result = Sum;
				}
			}
		}
	}
	cout << result << '\n';

	return 0;
}