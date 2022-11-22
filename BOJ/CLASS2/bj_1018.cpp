#include <iostream>
using namespace std;

int main() {
	int N, M, i, j, k, l, count_B=0, count_W=0, max=0;
	char Chess_B[9][9] = { "BWBWBWBW","WBWBWBWB","BWBWBWBW","WBWBWBWB","BWBWBWBW","WBWBWBWB","BWBWBWBW","WBWBWBWB" };
	char Chess_W[9][9] = { "WBWBWBWB","BWBWBWBW", "WBWBWBWB","BWBWBWBW", "WBWBWBWB","BWBWBWBW", "WBWBWBWB","BWBWBWBW" };
	cin >> N >> M;
	int* cont = new int[N];
	char** Board = new char*[N];
	for (i = 0;i < N;i++) {
		Board[i] = new char[M];
	}
	for (i = 0;i < N;i++) {
			cin >> Board[i];
	}
	for (i = 0;i <= N - 8;i++) {
		for (j = 0;j <= M - 8;j++) {
			for (k = 0;k < 8;k++) {
				for (l = 0;l < 8;l++) {
					if (Board[k + i][l + j] == Chess_B[k][l]) {
						count_B += 1;
					}
					if (Board[k + i][l + j] == Chess_W[k][l]) {
						count_W += 1;
					}
				}
			}
			if (count_B > max)
				max = count_B;
			if (count_W > max)
				max = count_W;
			count_B = 0;
			count_W = 0;
		}
	}
	cout << 64-max << '\n';
}