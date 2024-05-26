#include <iostream>

using namespace std;

int n, k;

int main(void) {
	cin.tie(0)->sync_with_stdio(false);

	cin >> n >> k;

	n--;

	while (n--) {
		k /= 2;
	}

	cout << k;

	return 0;   
}