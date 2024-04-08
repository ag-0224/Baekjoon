#include <iostream>
#include <queue>
#include <utility>

using namespace std;

queue <pair<long long, int>> q;

long long A, B, n;
int cnt;
bool check;

void BFS() {
	check = false;

	while (!q.empty()) {
		n = q.front().first, cnt = q.front().second;
		q.pop();

		if (n == B) {
			cout << cnt;
			check = true;
		}

		if (2 * n <= B) {
			q.push({ 2 * n, cnt + 1 });
		}

		if (10 * n + 1 <= B) {
			q.push({ 10 * n + 1, cnt + 1 });
		}
	}
	if (!check) {
		cout << -1;
	}
}

int main(void) {
	cin.tie(0)->sync_with_stdio(false);

	cin >> A >> B;

	q.push({ A, 1 });
	BFS();

	return 0;
}