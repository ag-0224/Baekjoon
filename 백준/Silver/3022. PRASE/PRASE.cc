#include <bits/stdc++.h>

using namespace std;

int n, ret;
string name;
map<string, int> m;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

	cin >> n;

	for (int i = 0; i < n; i++) {
		cin >> name;

		if (m[name] == 0) {
			m[name]++;
			continue;
		}

		int sum = 0;
		for (auto& x : m) {
			if (x.first != name) sum += x.second;
		}

		if (m[name] > sum) {
			ret++;
		}

		m[name]++;
	}

	cout << ret;

	return 0;
}