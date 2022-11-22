#include <iostream>
#include <algorithm>
using namespace std;

int comp(const void * f, const void * s) {
	int  a= *((int*)f);
	int  b= *((int*)s);
	if (a > b)
		return 1;
	else if(a < b)
		return -1;
	return 0;
}

int main() {
	int N;
	cin >> N;
	int* nums = new int[N];
	for (int i = 0; i < N; i++) {
		cin >> nums[i];
	}

	qsort(&nums[0], N, sizeof(int), comp);

	for (int i = 0; i < N; i++) {
		cout << nums[i] << '\n';
	}
}