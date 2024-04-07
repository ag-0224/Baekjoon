#include <iostream>
#include <string>

using namespace std;

string input;

int main(void) {
	cin.tie(0)->sync_with_stdio(false);

	while (!cin.eof()) {
		getline(cin, input);
		cout << input << "\n";
	}

	return 0;
}