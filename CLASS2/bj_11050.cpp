#include<iostream>
using namespace std;
int fact(int x) {
	if (x <=1)
		return 1;
	else
		return x*fact(x-1);
}
int main() {
	int N, K, S;
	cin >> N >> K;
	cout << fact(N) / (fact(K) * fact(N - K)) << '\n';
}