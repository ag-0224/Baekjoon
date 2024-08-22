#include <bits/stdc++.h>

using namespace std;

string s, ret;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

	cin >> s;

	ret = "";
	for (auto x : s) {
		if (ret.size() == 0 || ret[ret.size() - 1] != x) {
			ret += x;
		}
	}

	cout << ret;

	return 0;
}