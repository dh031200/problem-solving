#include <bits/stdc++.h>

using namespace std;

class bj_1212 {
public:
    void solution() {
        int n;
        deque<int> b;
        scanf("%o",&n);
        while(n>1){
            b.push_front(n%2);
            n/=2;
        }
        b.push_front(n);
        for(int i:b)
            cout << i;
    }
};