#include <iostream>
#include <stack>
#include <utility>

using namespace std;

int n, input;
stack<pair<int, int>> st;

int main(void) {
	cin.tie(0)->sync_with_stdio(false);

	cin >> n;

	for (int i = 0; i < n; i++) {
		cin >> input;
		
		while (!st.empty()) {
			if (input < st.top().second) {
				cout << st.top().first + 1 << " ";
				st.push(make_pair(i, input));
				break;
			}
			else {
				st.pop();
			}
		}

		if (st.empty()) {
			cout << "0 ";
			st.push(make_pair(i, input));
		}
	}

	return 0;
}