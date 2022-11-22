#include<iostream>
#include<deque>
using namespace std;
int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	deque<int> D;
	int N, T;
	char C[11];
	cin >> N;
	for (;N--;) {
		cin >> C;
		if (C[1] == 'u') {
			cin >> T;
			if (C[5] == 'f')
				D.push_front(T);
			else
				D.push_back(T);
			continue;
		}
		else if (C[1] == 'o') {
			if (D.empty())
				cout << -1;
			else {
				if (C[4] == 'f') {
					cout << D[0];
					D.pop_front();
				}
				else {
					cout << D[D.size() - 1];
					D.pop_back();
				}
			}
		}
		else if (C[1] == 'i')
			cout << D.size();
		else if (C[1] == 'm')
			cout << D.empty();
		else if (C[1] == 'r') {
			if (D.empty())
				cout << -1;
			else
				cout << D[0];
		}
		else if (C[1] == 'a') {
			if (D.empty())
				cout << -1;
			else
				cout << D[D.size() - 1];
		}
		cout << '\n';
	}
}