#include <iostream>
#include <string>

using namespace std;

int ans;
string input;

int v[] = { 3, 3, 3, 4, 4, 4, 5, 5, 5, 6, 6, 6, 7, 7, 7, 8, 8, 8, 8, 9, 9, 9, 10, 10, 10, 10 };

int main(void) {
	cin.tie(0)->sync_with_stdio(false);

	cin >> input;

	for (char x : input) {
		ans += v[x - 'A'];
	}

	cout << ans;

	return 0;   
}