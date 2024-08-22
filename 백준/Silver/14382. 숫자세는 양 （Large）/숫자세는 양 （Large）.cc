#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int t;
ll n, ret;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

	cin >> t;

	for (int i = 1; i <= t; i++) {
		cin >> n;

		if (n == 0) {
			cout << "Case #" << i << ": " << "INSOMNIA" << "\n";
			continue;
		}

		int a[10] = {0};
		ll c = 1;
		while (accumulate(a, a + 10, 0) != 10) {
			ll tmp = n * c++;
			ret = tmp;

			while (tmp > 0) {
				int r = tmp % 10;
				tmp /= 10;
				a[r] = 1;
			}
		}

		cout << "Case #" << i << ": " << ret << "\n";
	}

	return 0;
}