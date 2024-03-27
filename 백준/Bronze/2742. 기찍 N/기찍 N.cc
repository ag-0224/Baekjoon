#include <iostream>

using namespace std;

int n;

int main(void) {
	cin.tie(0)->sync_with_stdio(false);
	
	cin >> n;

	for (int i = n; i > 0; i--) cout << i << "\n";

	return 0;
}