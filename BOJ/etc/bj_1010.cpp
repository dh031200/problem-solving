#include <bits/stdc++.h>

using namespace std;

int D[30][30] = {0};
int F[30] = {0};

int fact(int n) {
    if (F[n] == 0) {
        if (n < 2)
            return 1;
        else
            F[n] *= F[n-1];
    }
    return F[n];
}

int DP(int N, int M) {
    if (DP[N][M] == 0) {

        if (N == M)
            DP[N][M] = 1;
        else {

        }
    }
    return DP[N][M];
}

class bj_1010 {
public:
    void solution() {
        int N, M, T;
        cin >> T;
        for (int i = 1; i < M; ++i) {
            DP[1][i] = M;
        }
        for (; T--;) {
            cin >> N >> M;
            cout << DP[N][M] << '\n';
        }
    }
};