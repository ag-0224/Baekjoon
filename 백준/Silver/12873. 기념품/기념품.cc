#include <iostream>
#include <cmath>
#include <queue>

using namespace std;

int n;

queue <int> q;

int main() {
	cin.tie(0)->sync_with_stdio(false);

	cin >> n;

	for (int i = 1; i <= n; i++) {
		q.push(i);
	}

	for (int i = 1; i <= n - 1; i++) {
		long long p = pow(i, 3);
		p--;
		p %= (n - i + 1);

		while (p--) {
			q.push(q.front());
			q.pop();
		}
		q.pop();
	}

	cout << q.front() << "\n";
}