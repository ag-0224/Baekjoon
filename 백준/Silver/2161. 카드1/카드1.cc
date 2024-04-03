#include <iostream>
#include <queue>

using namespace std;

int n;
queue <int> q;

int main(void) {
	cin.tie(0)->sync_with_stdio(false);

	cin >> n;

	for (int i = 0; i < n; i++) q.push(i + 1);

	while (!q.empty()) {
		cout << q.front() << " ";
		q.pop();

		if (q.empty()) break;

		q.push(q.front());
		q.pop();
	}

	return 0;
}