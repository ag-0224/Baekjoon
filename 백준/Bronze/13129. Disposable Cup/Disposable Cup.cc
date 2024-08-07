#include <bits/stdc++.h>

using namespace std;

int a, b, n;
int ret;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

	cin >> a >> b >> n;

	for (int i = 0; i < n; i++) {
		ret = b * (i + 1) + a * n;

		cout << ret << " ";
	}

	return 0;
}