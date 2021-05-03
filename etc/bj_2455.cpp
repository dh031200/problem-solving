#include <bits/stdc++.h>

using namespace std;

class bj_2455 {
public:
    void solution() {
        int a, b;
        int R[4] = {0};
        int max = 0;
        for (int i = 0; i < 4; ++i) {
            cin >> a >> b;
            if(i>0)
                R[i] = R[i-1];
            R[i] -= a;
            R[i] += b;
            if (R[i] > max)
                max = R[i];
        }
        cout << max;
    }
};