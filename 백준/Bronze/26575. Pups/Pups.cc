#include <bits/stdc++.h>

using namespace std;

int n;
double d, f, p;

int main() {
	cin >> n;

	while (n--) {
		cin >> d >> f >> p;

		cout << "$" << fixed << setprecision(2) << d * f * p << "\n";
	}
	
	return 0;
}