#include <bits/stdc++.h>

using namespace std;

int n;
int sum = 0;

void go(int x) {
	if (x == 1) return;
	int a = x / 2;
	int b = x - a;
	sum += a * b;
	go(a);
	go(b);
}

int main() {
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

	cin >> n;

	go(n);

	cout << sum << "\n";

	return 0;
}