#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

ll a, b;
ll ret = 1;

ll cal(ll n) {
	return n * (n + 1) / 2 % 14579;
}

int main() {
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

	cin >> a >> b;

	for (int i = a; i <= b; i++) {
		ret *= cal(i);
		ret %= 14579;
	}

	cout << ret << "\n";

	return 0;
}