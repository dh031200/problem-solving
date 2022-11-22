#include<iostream>
#include <vector>
using namespace std;
int main() {
	int i = 666, j;
	char num_s[8];
	int N;
	vector<int> num_i;
	cin >> N;
	while (num_i.size() <= 10000) {
		snprintf(num_s, sizeof(num_s), "%d", i);
		for (j = 0;j < num_s[j];j++) {
			if (num_s[j] == num_s[j + 1] && num_s[j] == num_s[j + 2] && num_s[j] == '6') {
				num_i.push_back(i);
				break;
			}
		}
		i++;
	}
	cout << num_i[N-1] << '\n';
}

hi  
[hi][ ]