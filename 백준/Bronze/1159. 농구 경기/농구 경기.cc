#include <bits/stdc++.h>

using namespace std;

int n, cnt[26];
string s;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	cin >> n;

	while (n--) {
		cin >> s;
		cnt[s[0] - 'a']++;
	}

	bool ret = false;
	for (int i = 0; i < 26; i++) {
		if (cnt[i] >= 5) {
			ret = true;
			cout << char(i + 'a');
		}
	}

	if (!ret) cout << "PREDAJA";

	return 0;
}