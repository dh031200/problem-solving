#include<iostream>

using namespace std;

int main() {
	int x, y, w, h, min;;
	cin >> x >> y >> w >> h;
	if (x > (w - x)) {
		min = w - x;
	}
	else {
		min = x;
	}
	if (y > h - y) {
		if ((h - y) < min)
			min = h - y;
	}
	else {
		if (y < min)
			min = y;
	}
	cout << min << '\n';
	return 0;
}