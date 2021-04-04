#include<bits/stdc++.h>
using namespace std;
vector<int> result;
vector<bool> Visit;
vector<int> tmp;
vector<int>::iterator pos;
int N;
vector<vector<int>> s_res;
int cnt = 0;
void DFS(int M) {
	if (result.size() == M) {
		tmp = result;
		sort(tmp.begin(), tmp.end());
		if (find(s_res.begin(), s_res.end(), tmp) == s_res.end()) {
			s_res.push_back(tmp);
		}
		return;
	}
	else {
		for (int i = 1; i <= N; i++) {
			if (Visit[i] == true)
				continue;
			Visit[i] = true;
			result.push_back(i);
			DFS(M);
			Visit[i] = false;
			result.pop_back();
		}
	}

}

int main() {
	int M;
	cin >> N >> M;
	Visit.resize(N + 1, false);
	DFS(M);
	for (int i = 0; i < s_res.size();i++) {
		for (int j = 0; j < s_res[i].size(); j++) {
			cout << s_res[i][j] << ' ';
		}
		cout << '\n';
	}
}