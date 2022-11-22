#include <iostream>
#include<queue>
using namespace std;
int main() {
	int i,N;
	queue<int> deck;
	cin >> N;
	for (i = 1;i <= N;i++) {
		deck.push(i);
	}
	while(deck.size() != 1) {
		deck.pop();
		deck.push(deck.front());
		deck.pop();
	}
	cout << deck.front() << '\n';
}