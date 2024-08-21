#include <bits/stdc++.h>

using namespace std;

int h, w;
int ans;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

	cin >> h;
	cin >> w;

	ans = min(h, w);

	cout << ans * 50 << '\n';

	return 0;
}