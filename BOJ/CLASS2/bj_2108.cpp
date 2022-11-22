#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;
int Count[8001] = { 0 };
int comp(const void * f, const void * s) {
	int a = *((int*)f);
	int b = *((int*)s);
	if (a > b)
		return 1;
	else if (a < b)
		return -1;
	return 0;
}


int main() {
	int N,i,sum=0;
	int fm=0, fm_idx;
	int second=-4001;
	int min = 4001, max = -4001;
	cin >> N;
	int* num = new int[N];
	for (i = 0;i < N;i++) {
		cin >> num[i];
		sum += num[i];
		if (num[i] > max)
			max = num[i];
		if (num[i] < min)
			min = num[i];
		Count[num[i] + 4000] += 1;
	}
	for (i = 0; i < 8001; i++) {
		if (Count[i] > fm) {
			fm = Count[i];
			fm_idx = i-4000;
			second = -4001;
		}
		else if (Count[i] == fm && fm != 0) {
			if (second == -4001) {
				second = i - 4000;
			}
		}
	}
	qsort(&num[0], N, sizeof(int), comp);
	cout << fixed;
	cout.precision(0);
	cout << round((double)sum / (double)N) << '\n';
	cout << num[N/2] << '\n';
	if (second != -4001)
		cout << second << '\n';
	else
		cout << fm_idx << '\n';
	cout << max - min << '\n';
}
