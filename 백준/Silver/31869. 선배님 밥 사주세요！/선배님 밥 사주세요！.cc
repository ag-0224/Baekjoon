#include <bits/stdc++.h>

using namespace std;

int n, w, d, p, ret;
string s;

int check[74];

map<string, pair<int, int>> m1;
map<string, int> m2;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

	cin >> n;

	for (int i = 0; i < n; i++) {
		cin >> s >> w >> d >> p;
		m1[s] = { (w - 1) * 7 + d, p };
	}

	for (int i = 0; i < n; i++) {
		cin >> s >> p;
		m2[s] = p;
	}

	for (auto x : m1) {
		if (x.second.second <= m2[x.first]) check[x.second.first] = 1;
	}

	for (int i = 0; i < 74; i++) {
		if (i > 0 && check[i] == 1) {
			check[i] += check[i - 1];
		}
		ret = max(ret, check[i]);
	}

	cout << ret << "\n";

	return 0;
}