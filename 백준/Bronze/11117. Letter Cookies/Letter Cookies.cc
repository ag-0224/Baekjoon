#include <bits/stdc++.h>

using namespace std;

int t, w;
string s;


int main() {
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	
	cin >> t;

	while (t--) {
		cin >> s;

		map<char, int> m1;

		for (char x : s) {
			m1[x]++;
		}

		cin >> w;

		while (w--) {
			cin >> s;

			map<char, int> m2;

			for (char x : s) {
				m2[x]++;
			}

			bool check = true;
			for (auto x : m2) {
				if (m1[x.first] < x.second) {
					check = false;
				}
			}

			if (check) cout << "YES" << "\n";
			else cout << "NO" << "\n";
		}
	}

	return 0;
}