#include<bits/stdc++.h>
using namespace std;

int main(){
    int N, t;
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> N;
    vector<int> nums(N);
    vector<int> P(N);
    for (int i = 0; i < N; ++i) {
        cin >> nums[i];
        P[i] = nums[i];
    }
    sort(nums.begin(),nums.end());
    nums.erase(unique(nums.begin(),nums.end()),nums.end());
    for (int i : P) {
        cout << lower_bound(nums.begin(),nums.end(), i) - nums.begin() << ' ';
    }
}