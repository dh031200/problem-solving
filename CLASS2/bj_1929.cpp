#include <iostream>

using namespace std;

int numset[1000000] = { 0 };

int main() {
    int N, M;
    int i, j = 1;
    int Num;

    numset[1] = 1;
    for (i = 2; i <= 1000; i++) {
        while (++j <= 1000000) {
            if (numset[j] == 1)
                continue;
            if ((j % i) == 0) {
                if (j == i) {
                    continue;
                }
                numset[j] = 1;
            }
        }
        j = 1;
    }

    cin >> M >> N;

    for (i = M;i <= N;i++) {
        if (numset[i] == 0)
            cout << i << '\n';
    }
    return 0;
}