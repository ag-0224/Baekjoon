#include <bits/stdc++.h>

using namespace std;

int a, b, c;
vector<int> v;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

	cin >> a >> b >> c;

	v.push_back(a);
	v.push_back(b);
	v.push_back(c);

	sort(v.begin(), v.end());

	int d1 = v[1] - v[0];
	int d2 = v[2] - v[1];

	if (d1 == d2) {
		if (v[2] + d1 > 100) cout << v[0] - d1;
		else cout << v[2] + d1;
	}
	else {
		int d3 = abs(d1) > abs(d2) ? d2 : d1;
		if (d3 == d1) cout << v[1] + d3;
		else cout << v[1] - d3;
	}

	return 0;
}