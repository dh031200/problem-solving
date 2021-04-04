#include<bits/stdc++.h>
using namespace std;
int main() {
	int i, t, K;
	vector<int> v;
	int sum = 0;
	cin >> K;
	for (i = 0;i < K;i++) {
		cin >> t;
		if (t == 0)
			v.pop_back();
		else
			v.push_back(t);
	}
	for (i = 0;i < v.size();i++) {
		sum += v[i];
	}
	cout << sum << '\n';
}