#include <bits/stdc++.h>

using namespace std;

string s, str;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

	while (true) {

		getline(cin, s);

		if (s == "0000 0000 0000 0000") break;

		str = "";
		for (char x : s) {
			if (x != ' ') str += x;
		}

		int sum = 0;

		for (int i = 0; i < 16; i++) {
			int d = str[i] - '0';

			if ((i + 1) % 2 != 0) {
				d *= 2;
				if (d > 9) d -= 9;
			}

			sum += d;
		}

		if (sum % 10 == 0) cout << "Yes" << "\n";
		else cout << "No" << "\n";
	}

	return 0;
}