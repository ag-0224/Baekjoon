#include <bits/stdc++.h>

using namespace std;

int a[100004], n, k, ret = - 10000000;
int s[100004];

int main() {
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

	cin >> n >> k;

	for (int i = 0; i < n; i++) {
		cin >> a[i];
		s[i + 1] = s[i] + a[i];
	}

	for (int i = k; i <= n; i++) {
		int sum = 0;
		sum = s[i] - s[i - k];

		ret = max(ret, sum);
	}

	cout << ret << "\n";

	return 0;
}