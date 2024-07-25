#include <bits/stdc++.h>

using namespace std;

int t, n;
string name, type;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

	cin >> t;

	while (t--) {
		cin >> n;

		map<string, int> mp;

		for (int i = 0; i < n; i++) {
			cin >> name >> type;

			mp[type]++;
		}

		long long ret = 1;

		for (auto c : mp) {
			ret *= ((long long)c.second + 1);
		}
		ret--;

		cout << ret << "\n";
	}

	return 0;
}