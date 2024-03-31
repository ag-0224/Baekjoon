#include <iostream>

using namespace std;

int t, s;

int main(void) {
	cin.tie(0)->sync_with_stdio(false);

	cin >> t >> s;

	int answer = 280;

	if ((12 <= t && t <= 16) && !s) {
		answer = 320;
	}

	cout << answer << '\n';

	return 0;
}