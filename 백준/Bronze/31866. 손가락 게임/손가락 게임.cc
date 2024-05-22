#include <iostream>

using namespace std;

int a, b;

bool is_valid(int x) {
	if (x == 0 || x == 2 || x == 5) 
		return true;
	else
		return false;
}

int main(void) {
	cin.tie(0)->sync_with_stdio(false);

	cin >> a >> b;

	if (is_valid(a) && is_valid(b)) {
		if (a == 5 && b == 0) {
			cout << ">";
		}
		else if (a == 5 && b == 2) {
			cout << "<";
		}
		else if (a == 2 && b == 0) {
			cout << "<";
		}
		else if (a == 2 && b == 5) {
			cout << ">";
		}
		else if (a == 0 && b == 5) {
			cout << "<";
		}
		else if (a == 0 && b == 2) {
			cout << ">";
		}
		else {
			cout << "=";
		}
	}
	else {
		if (is_valid(a)) {
			cout << ">";
		}
		else if (is_valid(b)) {
			cout << "<";
		}
		else {
			cout << "=";
		}
	}

	return 0;   
}