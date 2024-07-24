#include <bits/stdc++.h>

using namespace std;

int n;
vector<int> v;

void solve() {
	
	do {
		int sum = 0;

		for (int i = 0; i < 7; i++) {
			sum += v[i];
		}

		if (sum == 100) {
			for (int i = 0; i < 7; i++) {
				cout << v[i] << "\n";
			}

			break;
		}

	} while (next_permutation(v.begin(), v.end()));
}

int main() {

	for (int i = 0; i < 9; i++) {
		cin >> n;
		v.push_back(n);
	}

	sort(v.begin(), v.end());

	solve();

	return 0;
}