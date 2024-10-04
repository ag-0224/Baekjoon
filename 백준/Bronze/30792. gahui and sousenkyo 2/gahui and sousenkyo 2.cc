#include <bits/stdc++.h>

using namespace std;

int n, t, k;
vector<int> v;

int main() {
	cin >> n;

	cin >> t;

	for (int i = 0; i < n - 1; i++) {
		cin >> k;
		v.push_back(k);
	}

	sort(v.begin(), v.end());

	cout << v.end() - upper_bound(v.begin(), v.end(), t) + 1;
	
	return 0;
}