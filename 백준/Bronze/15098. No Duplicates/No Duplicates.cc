#include <bits/stdc++.h>

using namespace std;

string s;

vector<string> split(string input, string delimeter) {
	vector<string> ret;
	string token = "";
	long long pos;
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

	getline(cin, s);

	vector<string> ret = split(s, " ");

	map<string, int> m;

	bool check = true;
	for (auto x : ret) {
		m[x]++;
		if (m[x] > 1) {
			check = false;
			break;
		}
	}

	if (check) {
		cout << "yes" << "\n";
	}
	else {
		cout << "no" << "\n";
	}

	return 0;
}