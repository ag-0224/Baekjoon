#include <bits/stdc++.h>

using namespace std;

string s, p, mid, ret;
map<char, int> mp;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	cin >> s;

	for (char x : s) {
		mp[x]++;
	}

	for (auto x : mp) {
		for (int i = 0; i < x.second / 2; i++) {
			p += x.first;
		}
		if (x.second % 2 == 1) mid += x.first;
	}
	
	ret += p + mid;
	reverse(p.begin(), p.end());
	ret += p;

	string tmp = ret;
	reverse(tmp.begin(), tmp.end());

	if (ret == tmp) cout << ret;
	else cout << "I'm Sorry Hansoo";

	return 0;
}