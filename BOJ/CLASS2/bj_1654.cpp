#include<bits/stdc++.h>
using namespace std;
vector<int> L;

long long bs(int min, int K) {
	long long first = 1;
	long long last = min;
	long long sum = 0;
	long long mid,i;
	long long max = 0;
	while (first <= last) {
		mid = (first + last) / 2;
		for (i = 0;i < L.size();i++) {
			sum += L[i] / mid;
		}
		if (sum >= K) {
			first = mid + 1;
			max = mid;
		}
		else
			last = mid - 1;
		sum = 0;
	}
	return max;
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	long long N, K, i, t, min=0;
	long long sum = 0;
	long long c;
	cin >> N >> K;
	for (i = 0;i < N;i++) {
		cin >> t;
		L.push_back(t);
		if (t > min)
			min = t;
	}
	c = bs(min, K);

	cout << c << '\n';
}