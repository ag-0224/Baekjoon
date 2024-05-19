#include <iostream>
#include <cmath>
#include <deque>

using namespace std;

int n;

deque<int> dq;

int main() {
	cin.tie(0)->sync_with_stdio(false);

	cin >> n;
	for (int i = 1; i <= n; i++) {
		dq.push_back(i);
	}

	for (int i = 1; i <= n - 1; i++) {
		long long p = pow(i, 3);
		p--;
		p %= (n - i + 1);

		while (p--) {
			dq.push_back(dq.front());
			dq.pop_front();
		}
		dq.pop_front();
	}

	cout << dq.front() << "\n";
}