#include <bits/stdc++.h>
using namespace std;
class bj_10886{
public:
    void solution(){
        int t, i;
        int v[2] = {0};
        cin >> t;
        for(;t--;){
            cin >> i;
            v[i]++;
        }
        printf("Junhee is%scute!",v[0]>v[1] ? " not " : " ");
    }
};

