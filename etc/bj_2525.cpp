#include <bits/stdc++.h>

using namespace std;

class bj_2525 {
public:
    void solution() {
        int H, M, a;
        cin >> H >> M >> a;
        M += a;
        while(M >= 60){
            M -= 60;
            H += 1;
        }
        while(H >= 24)
            H -= 24;
        cout << H << " " << M << '\n';
    }
};