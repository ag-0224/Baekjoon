#include <iostream>

using namespace std;

int n;
int r, e, c;


int main(void) {
	cin.tie(0)->sync_with_stdio(false);

	cin >> n;
	while (n--) {
		cin >> r >> e >> c;

		if (r > e - c) cout << "do not advertise" << "\n";
		else if (r == e - c) cout << "does not matter" << "\n";
		else cout << "advertise" << "\n";
	}

	return 0;   
}