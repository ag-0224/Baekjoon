#include <bits/stdc++.h>

using namespace std;

int n, m, a, ret;
map<int, int> mp;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	cin >> n;
	cin >> m;

	for (int i = 0; i < n; i++) {
		cin >> a;
		mp[a]++;
	}

	for (auto x : mp) {
		if (mp.find(m - x.first) != mp.end()) ret++;
	}

	cout << ret / 2 << "\n";

	return 0;
}