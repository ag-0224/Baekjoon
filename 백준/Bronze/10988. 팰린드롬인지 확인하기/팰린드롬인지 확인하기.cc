#include <bits/stdc++.h>

using namespace std;

string s;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	cin >> s;

	bool ret = true;
	for (int i = 0; i < s.size() / 2; i++) {
		if (s[i] != s[s.size() - i - 1]) {
			ret = false;
			break;
		}
	}

	cout << ret ? 1 : 0;

	return 0;
}