#include<iostream>
#include<string>
#include<algorithm>
#define l length()
#define s string
using namespace std;
bool c(s a, s b) {
	if (a.l==b.l)
		return a<b;
	return a.l<b.l;
}
int main() {
	int N, i;
	cin >> N;
	s* w = new s[N];
	for (i = 0; i < N; i++) cin >> w[i];
	sort(w, w + N, c);
	for (i = 0; i < N; i++) {
		if (i > 0 && w[i] == w[i - 1])continue;
		cout << w[i] << '\n';
	}
}