#include<bits/stdc++.h>
using namespace std;
int main() {
	deque<int> Q;
	deque<int> C;
	vector<int> S;
	int T, N, M, t,i,r=0;
	cin >> T;
	for (;T--;) {
		Q.clear();
		C.clear();
		S.clear();
		cin >> N >> M;
		for (i = 1;i <= N;i++) {
			C.push_back(i);
		}
		for (;N--;) {
			cin >> t;
			Q.push_back(t);
		}
		while (!Q.empty()) {
			r = 0;
			for (i = 1;i < Q.size();i++) {
				if (Q[i] > Q[0]) {
					Q.push_back(Q.front());
					C.push_back(C.front());
					Q.pop_front();
					C.pop_front();
					r = 1;
					break;
				}
			}
			if (r == 0) {
				Q.pop_front();
				S.push_back(C.front());
				C.pop_front();
			}
		}
		for (i = 0;i < S.size();i++) {
			if (S[i] == M + 1) {
				cout << i+1 <<'\n';
				break;
			}
		}
	}
}