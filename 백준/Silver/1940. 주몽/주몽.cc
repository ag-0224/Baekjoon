#include <bits/stdc++.h>

using namespace std;

int n, m;
int input, ret;

vector<int> v;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

	cin >> n;
	cin >> m;

	for (int i = 0; i < n; i++) {
		cin >> input;
		v.push_back(input);
	}

	for (int i = 0; i < v.size(); i++) {
		for (int j = 0; j < i; j++) {
			if (v[i] + v[j] == m) {
				ret++;
			}
		}
	}

	cout << ret << "\n";

	return 0;
}