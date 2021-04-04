#include<bits/stdc++.h>
using namespace std;
int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	vector<int> stack;
	vector<int> seq;
	vector<int> check;
	vector<char> sol;
	int N, t, i, j;
	cin >> N;
	for (i = 0;i < N;i++) {
		cin >> t;
		check.push_back(t);
	}
	for (i = N;i > 0;i--) {
		seq.push_back(i);
	}
	j=0;
	while(j<N){
		t = check[j++];
		if (stack.empty()) {
			stack.push_back(seq[seq.size() - 1]);
			seq.pop_back();
			sol.push_back('+');
		}
		if (stack[stack.size() - 1] != t) {
			while(t != stack[stack.size() - 1]){
				if (seq.empty()) {
					cout << "NO\n";
					return 0;
				}
				stack.push_back(seq[seq.size() - 1]);
				seq.pop_back();
				sol.push_back('+');
			}
			sol.push_back('-');
			stack.pop_back();
		}
		else {
			sol.push_back('-');
			stack.pop_back();
		}
	}
	for (i = 0;i < sol.size();i++)
		cout << sol[i] << '\n';
}