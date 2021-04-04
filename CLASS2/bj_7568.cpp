#include <iostream>
using namespace std;
class Person {
private:
	int num;
	int weight;
	int height;
	int order = 0;
public:
	void set_num(int n) {
		num = n;
	}
	void set_weight(int n) {
		weight = n;
	}
	void set_height(int n) {
		height = n;
	}
	void set_order(int n) {
		order = n;
	}
	int get_num() {
		return num;
	}
	int get_weight() {
		return weight;
	}
	int get_height() {
		return height;
	}
	int get_order() {
		return order;
	}
};
int main() {
	int N, i, j, tmp;
	cin >> N;
	Person* person = new Person[N];
	for (i = 0;i < N;i++) {
		person[i].set_num(i);
		cin >> tmp;
		person[i].set_weight(tmp);
		cin >> tmp;
		person[i].set_height(tmp);
	}
	for (i = 0;i < N;i++) {
		for (j = 0;j < N;j++) {
			if (i == j)
				continue;
			if (person[i].get_weight() < person[j].get_weight())
				if (person[i].get_height() < person[j].get_height())
					person[i].set_order(person[i].get_order() + 1);
		}
	}
	for (i = 0;i < N;i++) {
		cout << person[i].get_order() + 1 << ' ';
	}
}