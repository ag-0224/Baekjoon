#include <bits/stdc++.h>

using namespace std;

string s;
int a[26];

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	cin >> s;

	for (char x : s) {
		a[x - 'a']++;
	}

	for (int i : a) {
		cout << i << " ";
	}

	return 0;
}