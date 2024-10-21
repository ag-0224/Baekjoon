#include <bits/stdc++.h>

using namespace std;

string s, ret;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	getline(cin, s);

	for (char x : s) {
		if ('a' <= x && x <= 'z') {
			ret += (x - 'a' + 13) % 26 + 'a';
		}
		else if ('A' <= x && x <= 'Z') {
			ret += (x - 'A' + 13) % 26 + 'A';
		}
		else ret += x;
	}

	cout << ret;

	return 0;
}