#include <bits/stdc++.h>

using namespace std;

int a, b, c, s, e;
int cnt[104], ret;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	cin >> a >> b >> c;

	for (int i = 0; i < 3; i++) {
		cin >> s >> e;
		for (int j = s; j < e; j++) {
			cnt[j]++;
		}
	}

	for (int x : cnt) {
		if (x == 3) ret += x * c;
		else if (x == 2) ret += x * b;
		else if (x == 1) ret += x * a;
	}

	cout << ret;

	return 0;
}