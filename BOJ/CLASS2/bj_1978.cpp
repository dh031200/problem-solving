#include <iostream>

using namespace std;

int numset[1000] = { 0 };

int main() {
    int testCase;
    int i, j = 1;
    int Num;
    int count = 0;

    numset[1] = 1;
    for (i = 2; i <= 32; i++) {
        while (++j <= 1000) {
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

    cin >> testCase;
    for (i = 0; i < testCase; i++) {
        cin >> Num;
        if (numset[Num] == 0) {
            count += 1;
        }
    }

    cout << count << '\n';
    return 0;
}