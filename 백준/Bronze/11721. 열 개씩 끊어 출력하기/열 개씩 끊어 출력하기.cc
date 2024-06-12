#include <iostream>
#include <string>

using namespace std;

string input;

int main(void) {
	cin.tie(0)->sync_with_stdio(false);

	cin >> input;

	for (int i = 0; i < input.size(); i++) {
		if (i != 0 && i % 10 == 0) cout << "\n";
		cout << input[i];
	}

	return 0;   
}