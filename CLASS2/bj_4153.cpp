#include<iostream>

using namespace std;

int main() {
	int i, side[3], sum;
	int max;
	while (1) {
		max = 0;
		sum = 0;
		for (i = 0;i < 3;i++) {
			cin >> side[i];
			if (side[i] > max)
				max = side[i];
		}
		if (max == 0)
			break;
		for (i = 0;i < 3;i++) {
			if (side[i] == max)
				continue;
			sum += side[i]*side[i];
			
		}
		if ((max * max) == sum)
			cout << "right\n";
		else
			cout << "wrong\n";
	}
	return 0;
}