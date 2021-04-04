#include <bits/stdc++.h>
using namespace std;
#define M 1234567891
int main() {
	unsigned long long sum = 0;
	unsigned long long p=1;
	unsigned long long n=0;
	int N,i,j;
	vector<int> v;
	string s;
	cin >> N;
	cin >> s;
	for (i=0;i<s.size();i++) {
		v.push_back(s[i]-96);
	}
	for (i = 0;i < v.size();i++) {
		p = 1;
		for (j = 0;j < i;j++)
			p = ((p % M) * 31) % M;
		n = (v[i] * p) % M;
		sum = ((sum % M) + (n % M)) % M;
		//cout << "31^" << j << " : " << p << '\n';
		//cout << "31^" << j << " < " << M << '\n';
		//cout << "n : " << n << '\n';
		//cout << "sum : " << sum << '\n';
		//sum += (v[i] * p);

	}
	cout << sum << '\n';
}

// (31%C * 31%C) %


//	sum = (A + B + C + D)

//	SUM % X

//  (A + B + C + D) % X

//  (A % X) + (B % X) + (C % X) + (D % X)