#include <bits/stdc++.h>

using namespace std;

string s, ret;

string v = "aiyeou";
string bv = "AIYEOU";
string c = "bkxznhdcwgpvjqtsrlmf";
string bc = "BKXZNHDCWGPVJQTSRLMF";

int main() {
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

	while (getline(cin, s)) {
		ret = "";

		for (int i = 0; i < s.length(); i++) {
			int pos = 0;
			if ((pos = v.find(s[i])) != string::npos) ret += v[(pos - 3 + v.length()) % v.length()];
			else if ((pos = bv.find(s[i])) != string::npos) ret += bv[(pos - 3 + bv.length()) % bv.length()];
			else if ((pos = c.find(s[i])) != string::npos) ret += c[(pos - 10 + c.length()) % c.length()];
			else if ((pos = bc.find(s[i])) != string::npos) ret += bc[(pos - 10 + bc.length()) % bc.length()];
			else ret += s[i];
		}

		cout << ret << "\n";
	}

	return 0;
}