#include <bits/stdc++.h>

using namespace std;

int N, T, R, m, M, X;
int ret;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	cin >> N >> m >> M >> T >> R;

	X = m;
	while (true) {
		if (N == 0) break;

		if (X == m && X + T > M) {
			ret = -1;
			break;
		}

		if (X + T <= M) {
			N--;
			X += T;
		}
		else {
			if (X - R >= m) X -= R;
			else X = m;
		}
		ret++;
	}

	cout << ret;

	return 0;
}