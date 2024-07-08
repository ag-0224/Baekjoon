#include <bits/stdc++.h>

using namespace std;

int arr[101];

int a, b, c;
int s, e;

int ret;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	cin >> a >> b >> c;

	for (int i = 0; i < 3; i++) {
		cin >> s >> e;

		for (int j = s; j < e; j++) {
			arr[j]++;
		}
	}

	for (int x : arr) {
		if (x == 3) ret += c * 3;
		else if (x == 2) ret += b * 2;
		else if (x == 1) ret += a;
	}

	cout << ret;

	return 0;
}