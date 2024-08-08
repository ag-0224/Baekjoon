#include <bits/stdc++.h>

using namespace std;

int n, m;
int c, d, k;
vector<int> v;
vector<int> h;

int mv, mh;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

	cin >> m >> n;

	cin >> c;

	while (c--) {
		cin >> d >> k;

		if (d == 1) h.push_back(k);
		if (d == 0) v.push_back(k);
	}

	h.push_back(0);
	v.push_back(0);
	h.push_back(m);
	v.push_back(n);
	sort(h.begin(), h.end());
	sort(v.begin(), v.end());

	for (int i = 1; i < h.size(); i++) {
		mh = max(mh, h[i] - h[i - 1]);
	}
	
	for (int i = 1; i < v.size(); i++) {
		mv = max(mv, v[i] - v[i - 1]);
	}

	cout << mh * mv << "\n";

	return 0;
}