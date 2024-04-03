#include <iostream>
#include <queue>

using namespace std;

int router_size, n;
queue <int> q;

int main(void) {
	cin.tie(0)->sync_with_stdio(false);

	cin >> router_size;

	while (true) {
		cin >> n;

		if (n == -1) break;

		if (n == 0 && !q.empty()) {
			q.pop();
			continue;
		}

		if (q.size() < router_size) {
			q.push(n);
		}

	}

	while (!q.empty()) {
		cout << q.front() << " ";
		q.pop();
	}

	return 0;
}