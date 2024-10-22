#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

ll n, ret, cnt;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	while (cin >> n) {

		ret = 1;
		cnt = 1;
		while (ret % n) {
			ret = ret * 10 + 1;
			ret %= n;
			cnt++;
		}

		cout << cnt << "\n";
	}

	return 0;
}