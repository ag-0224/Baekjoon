#include <bits/stdc++.h>

using namespace std;

int n, ret;
string s;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

	cin >> n;

	while (n--) {
		cin >> s;

		stack<char> stk;

		for (int i = 0; i < s.size(); i++) {
			if (stk.empty()) stk.push(s[i]);
			else if (stk.top() == s[i]) stk.pop();
			else if (stk.top() != s[i]) stk.push(s[i]);
		}

		if (stk.empty()) ret++;
	}

	cout << ret << "\n";

	return 0;
} 