#include <bits/stdc++.h>

using namespace std;

int k;
int a, b;

double tmp;
double ret = 9876543210;

vector<pair<int, int>> v;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

	cin >> k;

	while (k--) {
		cin >> a >> b;
		v.push_back({ a, b });
	}

	for (int i = 0; i < v.size(); i++) {
		tmp = 0;
		for (int j = 0; j < v.size(); j++) {
			tmp += pow(pow(v[i].first - v[j].first, 2) + pow(v[i].second - v[j].second, 2), 0.5);
		}
		ret = min(tmp, ret);
	}

	cout << fixed << setprecision(9) << ret / (v.size() - 1) << "\n";

	return 0;
}