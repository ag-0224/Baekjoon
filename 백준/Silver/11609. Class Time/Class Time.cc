#include <bits/stdc++.h>

using namespace std;

int n;
string f, l;

vector<pair<string, string>> v;

bool compare(pair<string, string> a, pair<string, string> b) {
	if (a.second != b.second) return a.second < b.second;
	else return a.first < b.first;
}

int main() {
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

	cin >> n;

	while (n--) {
		cin >> f >> l;
		v.push_back({ f, l });
	}

	sort(v.begin(), v.end(), compare);

	for (auto x : v) {
		cout << x.first << " " << x.second << "\n";
	}

	return 0;
}