#include <bits/stdc++.h>
using namespace std;
class bj_1934{
public:
    void solution(){
        int T;
        int a,b;
        cin >> T;
        for(;T--;){
            cin>> a >> b;
            int l,s;
            if(a>b) {
                l = a;
                s = b;
            }
            else{
                l = b;
                s = a;
            }
            int i = 1;
            int t = l;
            while(true){
                t = l * i++;
                if(t % s == 0)
                    break;
            }
            cout << t << '\n';
        }
    }
};