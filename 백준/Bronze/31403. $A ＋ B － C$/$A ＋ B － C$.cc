#include <iostream>
#include <string>

using namespace std;

int a, b, c;

int main(void) {
	cin.tie(0)->sync_with_stdio(false);

	cin >> a;
	cin >> b;
	cin >> c;

	cout << a + b - c << "\n";

	cout << stoi(to_string(a) + to_string(b)) - c << "\n";

	return 0;   
}