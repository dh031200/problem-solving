#include <bits/stdc++.h>

using namespace std;

class bj_2576 {
public:
    void solution() {
        int min = 101;
        int n[7];
        int s = 0;
        for (int i = 0; i < 7; ++i) {
            cin >> n[i];
            if(n[i] % 2 != 0) {
                s += n[i];
                if (n[i] < min)
                    min = n[i];
            }
        }
        if (s == 0)
            cout << -1 << '\n';
        else
            cout << s << '\n' << min << '\n';
    }
};