#include <iostream>

using namespace std;

int n;

int main(void) {
	cin.tie(0)->sync_with_stdio(false);

	cin >> n;

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n - i - 1; ++j) {
			cout << " ";
		}
		for (int j = 0; j < 2 * i + 1; ++j) {
			cout << "*";
		}
		cout << "\n";
	}

	for (int i = n - 2; i >= 0; i--) {
		for (int j = 0; j < n - i - 1; ++j) {
			cout << " ";
		}
		for (int j = 0; j < 2 * i + 1; ++j) {
			cout << "*";
		}
		cout << "\n";
	}

	return 0;   
}