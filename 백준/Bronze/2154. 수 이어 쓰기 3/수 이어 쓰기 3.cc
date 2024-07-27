#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int n;
ll pos;
string s;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

	cin >> n;

	s = "";

	for (int i = 1; i <= n; i++) {
		s += to_string(i);
	}

	pos = s.find(to_string(n));

	cout << pos + 1 << "\n";

	return 0;
}