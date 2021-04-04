#include<iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main() {

	int N, t, i;
	vector<int>::iterator it;
	vector<int> A;
	vector<int> B;
	cin >> N;
	for (i = 0;i < N;i++) {
		cin >> t;
		A.push_back(t);
	}
	cin >> N;
	for (i = 0;i < N;i++) {
		cin >> t;
		B.push_back(t);
	}
	for (i = 0;i < N;i++) {
		it = find(A.begin(), A.end(), B[i]);
		if (it != A.end())
			cout << 1;
		else
			cout << 0;
		cout << '\n';
	}
}