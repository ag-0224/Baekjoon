#include <bits/stdc++.h>

using namespace std; 

int a, b, c, d, e, f;
pair<int, int> ret;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

	cin >> a >> b >> c >> d >> e >> f;

	for (int i = -999; i <= 999; i++) {
		for (int j = -999; j <= 999; j++) {
			bool r1 = (a * i + b * j == c);
			bool r2 = (d * i + e * j == f);
			if (r1 && r2) {
				ret = { i, j };
			}
		}
	}

	cout << ret.first << " " << ret.second;

	return 0;
}