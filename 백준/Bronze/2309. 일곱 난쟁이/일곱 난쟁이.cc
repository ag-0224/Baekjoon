#include <bits/stdc++.h>

using namespace std;

int input;

vector <int> v;

int main() {
	cin.tie(NULL)->sync_with_stdio(false);

	for (int i = 0; i < 9; i++) {
		cin >> input;
		v.push_back(input);
	}

	for (int i = 0; i < 9; i++) {
		for (int j = 0; j < 9; j++) {
			vector <int> ret;

			if (i == j) continue;

			for (int k = 0; k < 9; k++) {
				if (k == i || k == j) continue;
				ret.push_back(v[k]);
			}

			int sum = 0;

			for (int x : ret) {
				sum += x;
			}

			if (sum == 100) {
				sort(ret.begin(), ret.end());
				for (int x : ret) {
					cout << x << "\n";
				}

				return 0;
			}
		}
	}
	
	return 0;
}