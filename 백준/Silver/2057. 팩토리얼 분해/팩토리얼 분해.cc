#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

ll n;
ll fact[20];
bool result;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	fact[0] = 1;
	
	for (ll i = 1; i < 20; i++) {
		fact[i] = fact[i - 1] * i;
	}

	cin >> n;
	if (n == 0) {
		cout << "NO";
	}
	else {
		for (int i = 19; i >= 0; i--) {
			if (n >= fact[i]) n -= fact[i];
		}
		if (n) cout << "NO";
		else cout << "YES";
	}

	return 0;
}