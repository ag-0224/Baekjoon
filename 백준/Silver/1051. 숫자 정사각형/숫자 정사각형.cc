#include <bits/stdc++.h>

using namespace std;

int n, m;
int ret;

char a[51][51];

int main() {
	cin >> n >> m;

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cin >> a[i][j];
		}
	}

	int h = min(n, m);

	for (int i = 1; i <= h; i++) {

		for (int j = 0; j < n - i + 1; j++) {
			for (int k = 0; k < m - i + 1; k++) {

				int tl = a[j][k];
				int tr = a[j][k + i - 1];
				int bl = a[j + i - 1][k];
				int br = a[j + i - 1][k + i - 1];

				if (tl == tr && tr == bl && bl == br) {
					ret = max(ret, i);
				}
			}
		}

	}

	cout << ret * ret;

	return 0;
}