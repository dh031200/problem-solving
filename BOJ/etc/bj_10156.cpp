#include <bits/stdc++.h>

using namespace std;

class bj_10156 {
public:
    void solution() {
        int K, N, M;
        cin >> K >> N >> M;
        cout << max(0,K*N-M);
    }
};