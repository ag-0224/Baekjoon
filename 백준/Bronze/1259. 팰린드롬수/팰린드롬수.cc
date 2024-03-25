#include <iostream>
#include <string>

using namespace std;

string str;
int n;

int main(void) {
	cin.tie(0)->sync_with_stdio(false);

	while (1) {
		cin >> str;

		if (str == "0") {
			break;
		}

		bool result = true;
		for (int i = 0; i < str.size() / 2; i++) {
			if (str[i] != str[str.size() - i - 1]) {
				result = false;
				break;
			}
		}
		cout << (result ? "yes" : "no") << "\n";
	}

	return 0;
}