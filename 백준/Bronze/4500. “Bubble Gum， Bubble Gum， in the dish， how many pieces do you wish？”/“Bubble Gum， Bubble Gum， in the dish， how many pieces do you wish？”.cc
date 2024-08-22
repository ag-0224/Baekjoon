#include <bits/stdc++.h>

using namespace std;

int t, n, a;
string s, name;

vector<string> split(string input, string delimeter) {
	vector<string> ret;
	long long pos;
	string token = "";
	while ((pos = input.find(delimeter)) != string::npos) {
		token = input.substr(0, pos);
		ret.push_back(token);
		input.erase(0, pos + delimeter.length());
	}
	ret.push_back(input);
	return ret;
}

int main() {
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

	cin >> t;
	cin.ignore();

	while (t--) {
		getline(cin, s);
		cin >> name >> n;
		cin.ignore();
		vector<string> ret = split(s, " ");

		for (int i = 0; i < ret.size(); i++) {
			if (name == ret[i]) {
				a = i;
				break;
			}
		}

		a = (a + n - 1) % ret.size();

		cout << ret[a] << "\n";
	}

	return 0;
}