#include <bits/stdc++.h>

using namespace std;

int a[26];
string s;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	cin >> s;

	memset(a, 0, sizeof(a));

	for (int i = 0; i < s.size(); i++) {
		a[s[i] - 'a'] += 1;
	}

	for (int x : a) cout << x << " ";

	return 0;
}