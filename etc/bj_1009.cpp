#include <bits/stdc++.h>

using namespace std;

class bj_1009 {
public:
    void solution() {
        int a, b, t;
        cin >> t;
        for (; t--;) {
            vector<int> n;
            int x = 1;
            cin >> a >> b;
            while (b != 1) {
                n.push_back(b % 2);
                b /= 2;
            }
            n.push_back(1);
            int p = a % 10;
            for (int i : n) {
                if (i == 1)
                    x = (x * p) % 10;
                p = (p * p) % 10;
            }
            if(x==0)
                x = 10;
            cout << x << '\n';
        }
    }
};