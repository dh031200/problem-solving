#include <iostream>

using namespace std;

int main() {
	int testCase;
	int i, j, H, W, N, roomY, roomX;
	cin >> testCase;

	for (i = 0;i < testCase;i++) {
		cin >> H >> W >> N;
		roomY = (N % H);
		if (roomY == 0)
			roomY = H;
		roomX = (N / H) + 1;
		if (N % H == 0)
			roomX -= 1;
		cout << roomY;
		if (roomX < 10)
			cout << '0';
		cout << roomX << '\n';
	}

	return 0;
}