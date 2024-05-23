#include <iostream>
#include <string>

using namespace std;

int n;
string k;
int odd, even;

int main(void) {
	cin.tie(0)->sync_with_stdio(false);

	cin >> n;
	cin >> k;

	for (char x : k) {
		int tmp = x - '0';
		if (tmp % 2) odd++;
		else even++;
	}

	if (odd > even) cout << "1";
	else if (odd < even) cout << "0";
	else cout << "-1";

	return 0;   
}