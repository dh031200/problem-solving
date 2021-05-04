#include <bits/stdc++.h>

using namespace std;

class bj_2845 {
public:
    void solution() {
        int L, P, t;
        cin >> L >> P;
        for (int i = 0; i < 5; ++i) {
            cin >> t;
            cout << t - L*P << ' ';
        }
    }
};