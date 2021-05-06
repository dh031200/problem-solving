#include <bits/stdc++.h>
using namespace std;
class bj_5565{
public:
    void solution(){
        int t,p;
        cin >> t;
        for (int i = 0; i < 9; ++i) {
            cin >> p;
            t-= p;
        }
        cout << t;
    }
};

