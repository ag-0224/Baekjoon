#include <bits/stdc++.h>

using namespace std;

int n, cnt;
long long c, ret;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

	cin >> c;

	while (true) {
		cnt++;
		n = cnt;

		ret = 0;

		int k = 0;
		while (n > 0) {
			int r = n % 3;
			ret += pow(7, k) * r;
			n /= 3;
			k++;
		}

		if (ret == c) {
			cout << cnt << "\n";
			break;
		}
	}

	return 0;
}