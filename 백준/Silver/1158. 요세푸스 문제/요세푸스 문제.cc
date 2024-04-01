#include <iostream>
#include <queue>
#include <vector>

using namespace std;

int n, k;
int index = 0;
queue <int> q;

int main(void) {
	cin >> n >> k;

	for (int i = 1; i <= n; i++) {
		q.push(i);
	}

	cout << "<";

	while (q.size() > 1) {
		for (int i = 0; i < k - 1; i++) {
			q.push(q.front());
			q.pop();
		}
		cout << q.front() << ", ";
		q.pop();
	}
	cout << q.front() << ">";

	return 0;
}