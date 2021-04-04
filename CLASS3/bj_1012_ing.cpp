#include<bits/stdc++.h>
using namespace std;
vector<int> n;
vector<int> result;
vector<bool> check;
void DFS(int D, int M) {
	if (D > M) {		//조건1
		for (int i = 0; i < result.size(); i++) {	//반복1
			cout << result[i] << ' ';
		}
		cout << '\n';
	}
	else
		for (int i = 0; i < check.size();i++) {		//반복2
			if (check[i] == false) {		//조건2
				result[D-1] = n[i];
				check[i] = true;
				DFS(D + 1, M);
				check[i] = false;
			}
		}
}

int main() {
	int N, M, i;
	cin >> N >> M;
	result.resize(M);
	check.resize(N);
	for (i = 1;i <= N;i++)
		n.push_back(i);
	DFS(1, M);
}