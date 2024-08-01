#include <bits/stdc++.h>

using namespace std;

int ret;
char c;
map<char, pair<int, int>> m;

const char* p[] = { "ABCD", "EFGH", "IJKL", "MNO."};

int main() {
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 4; j++) {
			cin >> c;
			m[c] = { i, j };
		}
	}

	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 4; j++) {
			if (p[i][j] != '.') {
				ret += abs(m[p[i][j]].first - i) + abs(m[p[i][j]].second - j);
			}
		}
	}

	cout << ret << "\n";

	return 0;
}