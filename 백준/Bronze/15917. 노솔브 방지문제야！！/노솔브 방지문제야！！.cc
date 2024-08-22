#include <bits/stdc++.h>

using namespace std;

int q, a;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

	cin >> q;

	while (q--) {
		cin >> a;

		vector<int> bin;

		while (a > 0) {
			bin.push_back(a % 2);
			a /= 2;
		}

		vector<int> r_bin;

		for (int x : bin) {
			if (x == 1) r_bin.push_back(0);
			else r_bin.push_back(1);
		}

		if (r_bin[r_bin.size() - 1] == 1) {
			r_bin[r_bin.size() - 1] = 0;
			r_bin[r_bin.size() - 2] = 1;
		}
		else {
			r_bin[r_bin.size() - 1] = 1;
		}

		vector<int> ret;

		for (int i = 0; i < bin.size(); i++) {
			ret.push_back(bin[i] & r_bin[i]);
		}

		bool check = true;
		for (int i = 0; i < bin.size(); i++) {
			if (bin[i] != ret[i]) {
				check = false;
				break;
			}
		}

		if (check) {
			cout << 1 << "\n";
		}
		else {
			cout << 0 << "\n";
		}
	}

	return 0;
}