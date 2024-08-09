#include <bits/stdc++.h>

using namespace std;

int n, k;
vector<int> v;
vector<int> tmp;

vector<pair<int, int>> ret;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

	cin >> n;
	
	for (int i = 0; i < n; i++) {
		cin >> k;
		v.push_back(k);
	}

	tmp = v;
	sort(tmp.begin(), tmp.end());

	int index = 0;
	for (auto x : tmp) {
		if (index == v.size()) break;
		if (x == v[index]) {
			index++;
			continue;
		}
		int pos = find(v.begin(), v.end(), x) - v.begin();
		reverse(v.begin() + index, v.begin() + pos + 1);
		ret.push_back({ index + 1, pos + 1});
		index++;
	}

	cout << ret.size() << "\n";
	for (auto x : ret) {
		cout << x.first << " " << x.second << "\n";
	}

	return 0;
}