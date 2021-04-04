#include <iostream>
#include <algorithm>
using namespace std;
class M {
public:
	int a;
	char m[101];
	int n;
};
bool c(M a, M b) {
	if (a.a == b.a)
		return a.n < b.n;
	return a.a < b.a;
}
int main() {
	int N,i;
	cin >> N;
	M* p = new M[N];
	for (i = 0;i < N;i++) {
		cin >> p[i].a >> p[i].m;
		p[i].n = i;
	}
	sort(p, p + N,c);
	for (i = 0;i < N;i++)
		cout << p[i].a << ' ' << p[i].m << '\n';
}