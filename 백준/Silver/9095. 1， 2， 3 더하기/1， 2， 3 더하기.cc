#include <bits/stdc++.h>

using namespace std;

int t, n;
int a[14];

int main() {
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

	cin >> t;

	a[1] = 1;
	a[2] = 2;
	a[3] = 4;

	for (int i = 4; i <= 10; i++) {
		a[i] = a[i - 1] + a[i - 2] + a[i - 3];
	}

	while (t--) {
		cin >> n;

		cout << a[n] << "\n";
	}

	return 0;
}