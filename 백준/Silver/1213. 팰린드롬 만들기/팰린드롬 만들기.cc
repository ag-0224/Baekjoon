#include <bits/stdc++.h>

using namespace std;

int cnt;
string s, ret;
map<char, int> _map;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

	cin >> s;

	for (int i = 0; i < s.size(); i++) {
		_map[s[i]]++;
	}

	string mid = "";
	string ret = "";
	for (auto x : _map) {
		for (int i = 0; i < x.second / 2; i++) ret += x.first;
		if (x.second % 2 == 1) {
			mid += x.first;
		}
	}
	
	sort(ret.begin(), ret.end());

	string t = ret;
	reverse(t.begin(), t.end());
	
	string tmp = mid;
	reverse(tmp.begin(), tmp.end());
	
	if (tmp == mid) {
		ret += mid;
		ret += t;
		cout << ret << "\n";
	}
	else cout << "I'm Sorry Hansoo" << "\n";

	return 0;
}