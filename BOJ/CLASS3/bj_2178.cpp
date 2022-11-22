#include<bits/stdc++.h>

using namespace std;
vector<vector<bool>> P;
int N, M;

void check(int y, int x, deque<pair<int, int>> *A) {
    if (x + 1 < M) {
        if (P[y][x + 1]) {
            A->emplace_back(y, x + 1);
            P[y][x + 1] = false;
        }
    }
    if (y + 1 < N) {
        if (P[y + 1][x]) {
            A->emplace_back(y + 1, x);
            P[y + 1][x] = false;
        }
    }
    if (x > 0) {
        if (P[y][x - 1]) {
            A->emplace_back(y, x - 1);
            P[y][x - 1] = false;
        }
    }
    if (y > 0) {
        if (P[y - 1][x]) {
            A->emplace_back(y - 1, x);
            P[y - 1][x] = false;
        }
    }
}

int BFS() {
    deque<pair<int, int>> Q;
    deque<pair<int, int>> tmp;
    int Count = 1;
    int x = 0;
    int y = 0;
    P[y][x] = false;
    check(y, x, &Q);
    while (true) {
        while (!Q.empty()) {
            y = Q.front().first;
            x = Q.front().second;
            check(y, x, &tmp);
            Q.pop_front();
            if (!P[N - 1][M - 1])
                return ++Count;
        }
        while (!tmp.empty()) {
            Q.push_back(tmp.back());
            tmp.pop_back();
        }
        Count++;
    }
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    string L;
    cin >> N >> M;
    P.resize(N);
    for (int i = 0; i < N; ++i) {
        P[i].resize(M);
    }
    for (int i = 0; i < N; ++i) {
        cin >> L;
        for (int j = 0; j < M; ++j) {
            if (L[j] == '1')
                P[i][j] = true;
            else
                P[i][j] = false;
        }
    }
    cout << BFS() + 1 << '\n';
}