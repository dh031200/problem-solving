#include <bits/stdc++.h>

using namespace std;

class bj_2163 {
public:
    void solution() {
        int N, M, cnt;
        cin >> N >> M;
        cnt = (N - 1) + N * (M-1);
        cout << cnt;
    }
};