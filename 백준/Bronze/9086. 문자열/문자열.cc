#include <iostream>
#include <string>

using namespace std;

string str;
int n;

int main(void) {
	cin.tie(0)->sync_with_stdio(false);

	cin >> n;

	for (int i = 0; i < n; i++) {
		cin >> str;
		char a = str[0];
		char b = str[str.size() - 1];
		cout << a << b << '\n';
	}

	return 0;
}