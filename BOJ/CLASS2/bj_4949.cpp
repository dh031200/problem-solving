#include<bits/stdc++.h>
using namespace std;
int main() {
	int i;
	string S;
	vector<char> v;
	while (1) {
		getline(cin, S);
		if (S == ".")
			break;
		for (i = 0;i < S.size();i++) {
			if (S[i] == '(') {
				v.push_back('(');
			}
			else if (S[i] == '[') {
				v.push_back('[');
			}
			else if (S[i] == ')') {
				if (v.empty())
					v.push_back('-');
				if (v[v.size() - 1] != '(')
					break;
				v.pop_back();
			}
			else if (S[i] == ']') {
				if (v.empty())
					v.push_back('-');
				if (v[v.size() - 1] != '[')
					break;
				v.pop_back();
			}
		}
		if(v.size() == 0)
			cout << "yes\n";
		else
			cout << "no\n";
		v.clear();
	}
}