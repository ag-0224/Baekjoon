#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int n, m, k, w;
ll target;
ll ret;

vector<int> v1;
vector<int> v2;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

	cin >> n >> m >> k;

	for (int i = 0; i < n; i++) {
		cin >> w;
		v1.push_back(w);
	}

	for (int j = 0; j < m; j++) {
		cin >> w;
		v2.push_back(w);
	}

	ll sum1 = accumulate(v1.begin(), v1.end(), 0);
	ll sum2 = accumulate(v2.begin(), v2.end(), 0);

	target = min(sum1, sum2);

	ll tmp1 = target;
	ll tmp2 = target;

	for (int i = 0; i < n; i++) {
		if (tmp1 == 0) break;

		if (tmp1 >= v1[i]) {
			ret += (i + 1) * v1[i];
			tmp1 -= v1[i];
		}
		else {
			ret += (i + 1) * tmp1;
			tmp1 = 0;
		}
	}

	for (int i = 0; i < m; i++) {
		if (tmp2 == 0) break;

		if (tmp2 >= v2[i]) {
			ret += (i + 1) * v2[i];
			tmp2 -= v2[i];
		}
		else {
			ret += (i + 1) * tmp2;
			tmp2 = 0;
		}
	}

	cout << target << " " << ret << "\n";

	return 0;
}