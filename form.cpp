#include<bits/stdc++.h>

using namespace std;

int main() {
    int n;
    deque<int> b;
    scanf("%o", &n);
    while (n > 1) {
        b.push_front(n % 2);
        n /= 2;
    }
    if()
    b.push_front(n);
    for (int i:b)
        cout << i;
}