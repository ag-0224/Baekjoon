#include <bits/stdc++.h>

using namespace std;

int n, s;
double sum;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

	cin >> n;

	for (int i = 0; i < n; i++) {
		cin >> s;

		int a = s % 10;
		int b = s / 10;

		if (a == 0 || a == 6) a = 9;
		if (b == 6) b = 9;
		s = b * 10 + a;

		if (s >= 100) s = 100;

		sum += s;
	}

	int avg = floor(sum / n + 0.5);

	cout << avg << "\n";

	return 0;
}