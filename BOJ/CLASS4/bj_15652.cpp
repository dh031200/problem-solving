#include<bits/stdc++.h>
using namespace std;
vector<int> result;
int N;
void DFS(int M) {
	if (result.size() == M) {
		for (int i = 0;i < result.size(); i++)
			cout << result[i] << ' ';
		cout << '\n';
		return;
	}
	else {
		for (int i = 1; i <= N; i++) {
			if(result.size() > 0)
				if (i < result[result.size() - 1])
					continue;
			result.push_back(i);
			DFS(M);
			result.pop_back();
		}
	}
}

int main() {
	int M;
	cin >> N >> M;
	DFS(M);
}