#include<bits/stdc++.h>
using namespace std;
#define A (a+50)
#define B (b+50)
#define C (c+50)

int D[101][101][101] = {0};

int w(int a, int b, int c) {
    if (a <= 0 || b <= 0 || c <= 0)
        return 1;
    else if (a > 20 || b > 20 || c > 20) {
        if (D[70][70][70] == 0)
            D[70][70][70] = w(20,20,20);
        return D[70][70][70];
    } else if ((a < b) && (b < c)){
        if(D[A][B][C-1] == 0)
            D[A][B][C-1] = w(a, b, c - 1);
        if(D[A][B-1][C-1] == 0)
            D[A][B-1][C-1] = w(a, b - 1, c - 1);
        if(D[A][B-1][C] == 0)
            D[A][B-1][C] = w(a, b - 1, c);
        return D[A][B][C-1]+D[A][B-1][C-1]-D[A][B-1][C];
    }
    else
        if(D[A-1][B][C] == 0)
            D[A-1][B][C] = w(a - 1, b, c);
        if(D[A-1][B-1][C] ==0)
            D[A-1][B-1][C] = w(a - 1, b - 1, c);
        if(D[A-1][B][C-1] == 0)
            D[A-1][B][C-1] = w(a - 1, b, c - 1);
        if(D[A-1][B-1][C-1] == 0)
            D[A-1][B-1][C-1] = w(a - 1, b - 1, c - 1);
        return D[A-1][B][C] + D[A-1][B-1][C] + D[A-1][B][C-1] - D[A-1][B-1][C-1];
}

int main() {
    int a, b, c;
    while (true) {
        cin >> a >> b >> c;
        if (a == -1 && b == -1 && c == -1)
            break;
        printf("w(%d, %d, %d) = %d\n",a,b,c,w(a, b, c));
    }
}