#include <bits/stdc++.h>

using namespace std;

int t, n;
int ret0[41];
int ret1[41];

int main() {
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

	cin >> t;

	ret0[0] = 1;
	ret1[0] = 0;
	ret0[1] = 0;
	ret1[1] = 1;

	for (int i = 2; i < 41; i++) {
		ret0[i] = ret0[i - 1] + ret0[i - 2];
		ret1[i] = ret1[i - 1] + ret1[i - 2];
 	}

	while (t--) {
		cin >> n;

		cout << ret0[n] << " " << ret1[n] << "\n";
	}

	return 0;
}