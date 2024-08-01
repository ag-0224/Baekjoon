#include <bits/stdc++.h>

using namespace std; 

string s;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

	while (true) {
		cin >> s;

		if (s == "#") {
			break;
		}

		string temp = "";
		bool ret = false;

		for (int i = 0; i < s.length(); i++) {
			temp = s.substr(0, i) + s.substr(i + 1, s.length());

			string tmp = temp;
			reverse(tmp.begin(), tmp.end());

			if (temp == tmp) {
				cout << temp << "\n";
				ret = true;
				break;
			}
		}

		if (!ret) {
			cout << "not possible" << "\n";
		}
	}

	return 0;
}