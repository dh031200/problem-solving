#include<iostream>
#include<string>
using namespace std;
int main() {
	int T, i, j,c = 0;
	cin >> T;
	string* PS = new string[T];
	for (i = 0;i < T;i++) {
		cin >> PS[i];
		for (j = 0;j < PS[i].size();j++) {
			if (c < 0)
				break;
			if (PS[i][j] == '(')
				c += 1;
			else
				c -= 1;
		}
		if (c != 0)
			cout << "NO\n";
		else
			cout << "YES\n";
		c = 0;
	}
}