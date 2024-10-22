#include <bits/stdc++.h>

using namespace std;

int n, cnt;
string s;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	cin >> n;
	
	for (int i = 0; i < n; i++) {
		cin >> s;

		stack<char> stk;

		for (char c : s) {
			if (stk.empty()) stk.push(c);
			else if (stk.top() == c) stk.pop();
			else stk.push(c);
		}

		if (stk.empty()) cnt++;
	}

	cout << cnt << "\n";

	return 0;
}