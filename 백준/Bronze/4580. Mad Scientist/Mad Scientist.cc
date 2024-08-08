#include <bits/stdc++.h>

using namespace std;

int n, k;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

	while (true) {
		cin >> n;

		if (n == 0) break;

		vector<int> v;
		for (int i = 0; i < n; i++) {
			cin >> k;
			v.push_back(k);
		}

		for (int i = 0; i < n; i++) {
			if (i == 0) {
				for (int j = 0; j < v[i]; j++) {
					cout << (i + 1) << " ";
				}
			}
			else {
				for (int j = 0; j < v[i] - v[i - 1]; j++) {
					cout << (i + 1) << " ";
				}
			}
		}
		cout << "\n";
	}

	return 0;
}