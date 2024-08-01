#include <bits/stdc++.h>

using namespace std; 

int t;
int ret;

map<int, char> m;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

	m[0] = 'N';
	m[1] = 'E';
	m[2] = 'S';
	m[3] = 'W';

	for (int i = 0; i < 10; i++) {
		cin >> t;

		ret += t;
		ret %= 4;
	}

	cout << m[ret] << "\n";

	return 0;
}