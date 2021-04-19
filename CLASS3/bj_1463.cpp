#include<bits/stdc++.h>

using namespace std;
vector<int> D(4);

int DP(int n) {
    if (D[n] != 0)  return D[n];
    else {
        if (n == 1) return D[1];
        else if (n == 2) return D[2];
        else if (n == 3) return D[3];
        else {
            if (n % 3 == 0 && n % 2 == 0)   return D[n] = 1 + min(DP(n / 3), DP(n / 2));   //D[n] = 1 + min(DP(n-1),min(DP(n/3),DP(n/2)))를 하니 너무 오래걸림
            else if (n % 2 == 0)    return D[n] = 1 + min(DP(n / 2), DP(n - 1));           //D[n] = 1 + min(DP(n/3),DP(n/2))로 수정
            else if (n % 3 == 0)    return D[n] = 1 + min(DP(n / 3), DP(n - 1));
            else    return D[n] = 1 + DP(n - 1);
        }
    }
}

int main() {
    int N;
    cin >> N;
    D[1] = 0;
    D[2] = 1;
    D[3] = 1;
    D.resize(N + 1);
    cout << DP(N);
}