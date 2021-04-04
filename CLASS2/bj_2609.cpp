#include<iostream>
using namespace std;
int main() {
	int N, S,B,i=1;
	int Max, Min;
	cin >> N >> S;
	if (N >= S)
		B = N;
	else {
		B = S;
		S = N;
	}
	while (i <= S) {
		if(B % i == 0 && S % i == 0)
			Max = i;
		i++;
	}
	Min = B;
	while (!(Min % B == 0 && Min % S == 0)) {
		Min += 1;
	}
	cout << Max << '\n' << Min << '\n';
}