#include <iostream>
#include <queue>

using namespace std;

int n, k;
queue <int> q;

int main(void) {
	cin.tie(0)->sync_with_stdio(false);

	cin >> n >> k;

	q = queue<int>();

	for (int i = 0; i < n; i++) {
		q.push(i + 1);
	}

	while (q.size() >= k) {
		q.push(q.front());
		for (int i = 0; i < k; i++) {
			q.pop();
		}
	}
	
	cout << q.front();

	return 0;
}