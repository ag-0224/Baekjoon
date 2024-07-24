#include <bits/stdc++.h>

using namespace std;

int n;
string s, a, b, f, e;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

	cin >> n;

	cin >> s;
	int pos = s.find("*");
	a = s.substr(0, pos);
	b = s.substr(pos + 1);

	while (n--) {
		cin >> s;

		if (s.length() < a.length() + b.length()) {
			cout << "NE" << "\n";
			continue;
		}
		f = s.substr(0, pos);
		e = s.substr(s.length() - b.length());

		if (f == a && e == b) cout << "DA" << "\n";
		else cout << "NE" << "\n";
	}

	return 0;
}