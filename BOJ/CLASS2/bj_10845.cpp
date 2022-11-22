#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
vector<int> s;
int main() {
	int N,T;
	char C[6];
	cin >> N;
	for (;N--;) {
		cin >> C;
		switch (C[1]) {
		case 'u':
			cin >> T;
			s.push_back(T);
			break;
		case 'o':
			if (s.empty())
				cout << -1 << '\n';
			else {
				reverse(s.begin(), s.end());
				cout << s[s.size() - 1] << '\n';
				s.pop_back();
				reverse(s.begin(), s.end());
			}
			break;
		case 'i':
			cout << s.size() << '\n';
			break;
		case 'm':
			cout << s.empty() << '\n';
			break;
		case 'r':
			if (s.empty())
				cout << -1 << '\n';
			else
				cout << s[0] << '\n';
			break;
		case 'a':
			if (s.empty())
				cout << -1 << '\n';
			else
				cout << s[s.size() - 1] << '\n';
			break;
		}
	}
}