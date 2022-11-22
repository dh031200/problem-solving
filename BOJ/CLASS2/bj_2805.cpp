#include<bits/stdc++.h>
using namespace std;
vector<int> v;
int bs(int l, int k) {
	long long first = 0;
	long long last = l;
	long long mid, sum, t;
	long long max = 0;
	int i;
	while (first <= last) {
		sum = 0;
		mid = (first + last) / 2;
		for (i = 0;i < v.size();i++) {
			t = v[i] - mid;
			if (t < 0)
				t = 0;
			sum += t;
		}
		if (sum >= k) {
			max = mid;
			first = mid + 1;
		}
		else
			last = mid - 1;
	}
	return max;
}
int main() {
	int N, M, i, t, s, max = 0;
	cin >> N >> M;
	for (i = 0;i < N;i++) {
		cin >> t;
		v.push_back(t);
		if (t > max)
			max = t;
	}
	s = bs(max, M);
	cout << s << '\n';
}