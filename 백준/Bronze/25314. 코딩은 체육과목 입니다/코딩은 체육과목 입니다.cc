#include <iostream>

using namespace std;

int n;

int main(void) {
	cin.tie(0)->sync_with_stdio(false);

	cin >> n;

	for (int i = 0; i < n / 4; i++) {
		cout << "long ";
	}
	cout << "int" << '\n';

	return 0;
}