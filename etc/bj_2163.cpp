#include <bits/stdc++.h>
using namespace std;
class bj_2163 {
public:
    void solution() {
        int N,M;
        int count =0;
        cin >> N >> M;
        for (int i = 0; i < N-1; ++i)
            count +=1;
        for(int i=0;i<N-1;i++)
            count+= (count*M-1);
        cout << count;
    }
};