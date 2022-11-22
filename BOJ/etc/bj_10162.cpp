#include <bits/stdc++.h>

using namespace std;

class bj_10162 {
public:
    void solution() {
        int n;
        int btn[3] = { 0 };
        cin >> n;
        if(n%10 != 0){
            cout << -1;
            return;
        }
        while(n >= 300){
            n -= 300;
            btn[0] += 1;
        }
        while( n>= 60){
            n-=60;
            btn[1] += 1;
        }
        btn[2] = n/10;
        cout << btn[0] << ' ' << btn[1] << ' ' << btn[2];
    }
};