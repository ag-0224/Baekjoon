#include <bits/stdc++.h>

using namespace std;

int n, k;
long long ret;

vector<int> v;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

	cin >> n;

	for (int i = 0; i < n; i++) {
		cin >> k;
		v.push_back(k);
	}

	sort(v.begin(), v.end(), greater<int>());

	for (int i = 0; i < n; i++) {
		ret += (long long)2 * (n - 1 - 2 * i) * v[i];
	}

	cout << ret << "\n";

	return 0;
}