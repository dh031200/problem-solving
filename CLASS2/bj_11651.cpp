#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main() {
	int N,i,a,b;
	cin >> N;
	vector<pair<int, int>> arr;
	for (i = 0;i < N;i++) {
		cin >> a >> b;
		arr.push_back(make_pair(b,a));
	}
	sort(arr.begin(), arr.end());
	for (i = 0;i < N;i++)
		cout << arr[i].second << ' ' << arr[i].first << '\n';
}