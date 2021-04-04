#include<iostream>

using namespace std;

int main() {
	int n, i;
	int check = 1;
	int count = 1;
	cin >> n;
	for (i = 1; n > check; i++) {
		check += i * 6;
		count += 1;
	}
	cout << count << '\n';
	return 0;
}