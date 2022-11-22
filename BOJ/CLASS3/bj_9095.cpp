#include<bits/stdc++.h>
using namespace std;

int N;
int Sum;
int Count;
void DFS(){
    if(Sum == N)
        Count++;
    else if(Sum > N)
        return;
    else{
        for (int i = 1; i <= 3; ++i) {
            Sum += i;
            DFS();
            Sum -= i;
        }
    }
}
int main(){
    int t;
    cin >> t;
    for (int l = 0; l < t; ++l) {
            cin >> N;
            Count = 0;
            Sum = 0;
            DFS();
            cout << Count << '\n';
    }
}