#include <bits/stdc++.h>

using namespace std;

int x;

int main() {
	cin >> x;

	int line = 1;

	while (x > line) {
		x -= line;
		line++;
	}

	if (line % 2 == 1) {
		cout << line - x + 1 << "/" << x;
	}
	else {
		cout << x << "/" << line - x + 1;
	}

	return 0;
}