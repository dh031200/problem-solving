#include<bits/stdc++.h>
using namespace std;
class bj_2748{
public:
    long long D[91]{0};
    long long DP(int n){
        if(n==0)
            return D[0];
        if(n==1)
            return D[1];
        if(D[n] == 0)
            D[n] = DP(n-1) + DP(n-2);
        return D[n];
    }
    void solution(){
        int N;
        D[0] = 0;
        D[1] = 1;
        cin >> N;
        cout << DP(N);
    }
};