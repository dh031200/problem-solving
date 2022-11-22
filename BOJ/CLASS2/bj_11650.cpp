#include <iostream>
using namespace std;

class Point {
public:
	int x;
	int y;
};

int comp(const void* f, const void* s) {
	int a = *((int*)f);
	int b = *((int*)s);
	if (a > b)
		return 1;
	else if (a < b)
		return -1;
	return 0;
}

int main() {
	int N,i,j,k,l,tmp,gap=0;
	cin >> N;
	Point* point = new Point[N];
	for (i = 0;i < N;i++)
		cin >> point[i].x >> point[i].y;
	qsort(&point[0].x, N, sizeof(Point), comp);

	for (i = 0;i < N;i++) {
		for (j = i + 1;j < N;j++) {
			if (point[i].x == point[j].x) {
				gap += 1;
			}
			else
				break;
		}
		for (k = i; k < i+gap;k++) {
			for (l = k + 1;l <= i+gap;l++) {
				if (point[k].y > point[l].y) {
					tmp = point[k].y;
					point[k].y = point[l].y;
					point[l].y = tmp;
				}
			}
		}
		i += gap;
		gap = 0;
	}

	for (i = 0;i < N;i++)
		cout << point[i].x << ' ' << point[i].y << '\n';
}