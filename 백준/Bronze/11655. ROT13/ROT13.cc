#include <bits/stdc++.h>

using namespace std;

string s;
char ret;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

	getline(cin, s);

	for (int i = 0; i < s.length(); i++) {
		if ('a' <= s[i] && s[i] <= 'z') {
			ret = (s[i] + 13 - 'a') % 26 + 'a';
			cout << ret;
		}
		else if ('A' <= s[i] && s[i] <= 'Z') {
			ret = (s[i] + 13 - 'A') % 26 + 'A';
			cout << ret;
		}
		else cout << s[i];
	}

	return 0;
}