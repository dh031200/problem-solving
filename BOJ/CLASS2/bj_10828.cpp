#include<iostream>
#include<vector>
#include<string>
using namespace std;
vector<int> s;
void PUSH(int X){
	s.push_back(X);
}

int POP() {
	if (s.size() == 0)
		return -1;
	int X;
	X = s[s.size()-1];
	s.pop_back();
	return X;
}

int SIZE() {
	return s.size();
}

int EMPTY() {
	return s.empty();
}

int TOP() {
	if (s.empty())
		return -1;
	return s[s.size()-1];
}

int main() {
	int N,T;
	string C;
	cin >> N;
	for (;N--;) {
		cin >> C;
		if (C == "push") {
			cin >> T;
			PUSH(T);
		}
		else if (C == "pop")
			cout << POP() << '\n';
		else if (C == "size")
			cout << SIZE() << '\n';
		else if (C == "empty")
			cout << EMPTY() << '\n';
		else if (C == "top")
			cout << TOP() << '\n';
	}
}