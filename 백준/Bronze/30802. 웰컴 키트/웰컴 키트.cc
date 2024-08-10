#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int n, s;
vector<int> v;
int t, p;

ll ret;
ll mok, nam;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

	cin >> n;
	
	for (int i = 0; i < 6; i++) {
		cin >> s;
		v.push_back(s);
	}

	cin >> t >> p;

	for (int x : v) {
		if (x % t == 0) {
			ret += x / t;
		}
		else {
			ret += x / t + 1;
		}
	}

	mok = n / p;
	nam = n % p;

	cout << ret << "\n";
	cout << mok << " " << nam << "\n";

	return 0;
}