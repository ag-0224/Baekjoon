#include <iostream>
#include <string>

using namespace std;

string str;
int result;

int main(void) {
	cin.tie(0)->sync_with_stdio(false);

	cin >> str;

	result = 0;
	for (int i = 0; i < str.size(); i++) {
		if (i == 0) {
			result += 10;
			continue;
		}
		if (str[i - 1] != str[i]) result += 10;
		else result += 5;
	}
	cout << result;

	return 0;
}