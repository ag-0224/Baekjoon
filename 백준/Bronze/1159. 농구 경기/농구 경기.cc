#include <bits/stdc++.h>

using namespace std;

int n;
string str;
map <char, int> mp;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

	cin >> n;

	for (int i = 0; i < n; i++) {
		cin >> str;

		mp[str[0]]++;
	}

	bool check = false;
	for (auto it = mp.begin(); it != mp.end(); it++) {
		if ((*it).second >= 5) {
			cout << (*it).first;
			check = true;
		}
	}

	if (!check) cout << "PREDAJA";

	return 0;
}