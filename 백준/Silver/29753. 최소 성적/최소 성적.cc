#include <bits/stdc++.h>

using namespace std;

int n, c, k, ret, t;
string x, s, ans = "A+";
map<string, int> m;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

	cin >> n >> x;

	string tmp = "";
	for (int i = 0; i < x.length(); i++) {
		if (x[i] != '.') tmp += x[i];
	}

	m["A+"] = 450;
	m["A0"] = 400;
	m["B+"] = 350;
	m["B0"] = 300;
	m["C+"] = 250;
	m["C0"] = 200;
	m["D+"] = 150;
	m["D0"] = 100;
	m["F"] = 0;

	for (int i = 0; i < n - 1; i++) {
		cin >> c >> s;
		ret += c * m[s];
		t += c;
	}

	cin >> k;
	t += k;
	bool check = false;
	for (auto i : m) {
		if ((ret + k * i.second) / t > atoi(tmp.c_str())) {
			check = true;
			ans = i.first;
		}
	}

	if (check) cout << ans;
	else cout << "impossible";

	return 0;
}