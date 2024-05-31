#include <iostream>
#include <cmath>

using namespace std;

int a, b;
int p;
int ans;

int main(void) {
	cin.tie(0)->sync_with_stdio(false);

	while (cin >> a >> b) {
		p = p - a + b;
		ans = max(ans, p);
	}

	cout << ans;

	return 0;   
}