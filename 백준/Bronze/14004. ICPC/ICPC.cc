#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

ll a, b, c, d;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

	cin >> a >> b >> c >> d;

	cout << (c + d) / (a - b) << "\n";

	return 0;
}