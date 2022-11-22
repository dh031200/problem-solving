#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main() {
	int i, j, N, K;
	vector<int>::iterator f;
	vector<int> r;
	cin >> N >> K;
	i = 1;
	j = 1;
	cout << '<';
	while (1) {
		if (r.size() == N)
			break;
		i %= N+1;
		if (i == 0)
			i = 1;
		f = find(r.begin(), r.end(), i);
		if (f != r.end()) {
			i += 1;
			continue;
		}
		if (j % K == 0) {
			if (r.size() == N - 1)
				cout << i << ">\n";
			else
				cout << i << ", ";
			r.push_back(i);
		}
		i++;
		j += 1;
	}
}