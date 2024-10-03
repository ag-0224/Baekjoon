#include <bits/stdc++.h>

using namespace std;

string s, ans;
int n;
int k;

int main() {
	
	for (int i = 0; i < 7; i++) {
		cin >> s >> k;

		if (k > n) {
			ans = s;
			n = k;
		}
	}

	cout << ans;
	
	return 0;
}