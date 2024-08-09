#include <bits/stdc++.h>

using namespace std;

int n;
string s;
map<char, int> m;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

	cin >> n;
	cin >> s;

	char prev = ' ';
	for (int i = 0; i < s.size(); i++) {
		if (prev != s[i]) {
			prev = s[i];
			m[s[i]]++;
		}
	}

	if (m['B'] > m['R']) {
		cout << m['R'] + 1<< "\n";
	}
	else {
		cout << m['B'] + 1 << "\n";
	}

	return 0;
}