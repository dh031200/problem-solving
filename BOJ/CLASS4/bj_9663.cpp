#include<bits/stdc++.h>
using namespace std;
vector<vector<int>> Board;
int N;
int cnt = 0;
void DFS(int D) {
	if (D >= N) {
		cnt += 1;
		return;
	}
	else {
		for (int i = 0;i < Board.size();i++) {
			if (Board[D][i])
				continue;
			Board[D][i] += 1;
			for (int j = 1;j < Board.size() - D;j++)
				Board[D + j][i] += 1;
			for (int j = 1;j < Board.size() - i;j++) {
				if (D + j >= Board.size() || i + j >= Board.size())
					break;
				Board[D + j][i + j] += 1;
			}
			for (int j = 1; j <= i; j++) {
				if (D + j >= Board.size() || i - j < 0)
					break;
				Board[D + j][i - j] += 1;
			}
			DFS(D + 1);
			Board[D][i] -= 1;
			for (int j = 1;j < Board.size() - D;j++)
				Board[D + j][i] -= 1;
			for (int j = 1;j < Board.size() - i;j++) {
				if (D + j >= Board.size() || i + j >= Board.size())
					break;
				Board[D + j][i + j] -= 1;
			}
			for (int j = 1; j <= i; j++) {
				if (D + j >= Board.size() || i - j < 0)
					break;
				Board[D + j][i - j] -= 1;
			}
		}
	}
}

int main() {
	int i;
	cin >> N;
	Board.resize(N);
	for (i = 0;i < Board.size();i++)
		Board[i].resize(N);
	DFS(0);
	cout << cnt << '\n';
}