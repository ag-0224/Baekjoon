#include <bits/stdc++.h>

using namespace std;

int n;
string s;

bool compare(string a, string b) {
	if (a.size() != b.size()) return a.size() < b.size();
	else return a < b;
}

int main() {
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

	cin >> n;
	cin.ignore();

	vector<string> v1;
	vector<string> v2;

	while (n--) {
		getline(cin, s);

		if (s.size() > 7) {
			if (s.substr(0, 7) == "boj.kr/") v2.push_back(s);
			else v1.push_back(s);
		}
		else v1.push_back(s);
	}

	sort(v1.begin(), v1.end(), compare);
	sort(v2.begin(), v2.end(), compare);

	for (auto x : v1) cout << x << "\n";
	for (auto x : v2) cout << x << "\n";

	return 0;
}