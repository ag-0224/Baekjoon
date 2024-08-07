#include <bits/stdc++.h>

using namespace std;

string s;
map<string, string> m;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	
	m["M"] = "MatKor";
	m["W"] = "WiCys";
	m["C"] = "CyKor";
	m["A"] = "AlKor";
	m["$"] = "$clear";

	cin >> s;

	cout << m[s] << "\n";

	return 0;
}