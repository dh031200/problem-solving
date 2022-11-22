#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main() {
	string N,M;
	while (1) {
		cin >> N;
		if (N == "0")
			break;
		M = N;
		reverse(N.begin(), N.end());
		if (M == N)
			cout << "yes\n";
		else
			cout << "no\n";
	}
}