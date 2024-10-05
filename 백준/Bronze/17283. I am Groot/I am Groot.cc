#include <bits/stdc++.h>

using namespace std;

int L, R;
int result;

int main() {
	cin >> L;
	cin >> R;

	int i = 1;
	while ((L = L * R / 100) > 5) {
		result += pow(2, i++) * L;
	}

	cout << result;
	
	return 0;
}