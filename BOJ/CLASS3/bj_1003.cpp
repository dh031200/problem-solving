#include<bits/stdc++.h>
using namespace std;
int main() {
    int T,i,j,tmp;
    int Cz, Co;
    cin >> T;
    for (;T--;) {
        cin >> i;
        if (i == 0)
            cout << "1 0\n";
        else if (i == 1)
            cout << "0 1\n";
        else {
            Cz = 1;
            Co = 1;
            for (j = 2;j < i;j++) {
                tmp = Co;
                Co = Co + Cz;
                Cz = tmp;
            }
            cout << Cz << ' ' << Co << '\n';
        }
    }
}