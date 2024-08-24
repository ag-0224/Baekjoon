#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

ll n, m, h, ret, ans;
vector<ll> v;

void binarySearch(ll start, ll end, ll target) {
	
	while (start <= end) {
		ll mid = (start + end) / 2;
		ll tmp = 0;

		for (auto x : v) {
			if (mid < x) {
				tmp += (x - mid);
			}
		}

		if (tmp >= target) {
			ans = max(ans, mid);
			start = mid + 1;
		}
		else if (tmp < target) {
			end = mid - 1;
		}
	}
}

int main() {
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

	cin >> n >> m;

	while (n--) {
		cin >> h;
		v.push_back(h);
	}

	sort(v.begin(), v.end());

	binarySearch(0, v[v.size() - 1], m);

	cout << ans << "\n";

	return 0;
}