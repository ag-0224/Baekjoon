#include <iostream>
#include <stack>

using namespace std;

int k, x;
stack <int> st;

int main(void) {
	cin.tie(0)->sync_with_stdio(false);

	cin >> k;

	st = stack<int>();

	for (int i = 0; i < k; i++) {
		cin >> x;

		if (x == 0 && !st.empty()) {
			st.pop();
		}
		else st.push(x);
	}

	int sum = 0;
	while (!st.empty()) {
		sum += st.top();
		st.pop();
	}

	cout << sum << '\n';

	return 0;
}