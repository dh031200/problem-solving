#include <iostream>

using namespace std;

int main() {
	double A, B, V, day;
	cin >> A >> B >> V;

	day = (V - A) / (A - B);
	int i = (int)day;
	if (day > i * 1.0)
		day = (double)i + 1;
	else
		day = i;
	printf("%.0lf\n", day + 1);

	return 0;
}