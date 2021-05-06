#include <bits/stdc++.h>

using namespace std;

class bj_2010 {
public:
    void solution() {
        int n, t, i = 1;
        cin >> t;
        for (;t--;) {
            cin >> n;
            i+=n-1;
        }
        cout << i;
    }
};