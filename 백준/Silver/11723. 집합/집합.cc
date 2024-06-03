#include <iostream>
#include <string>
#include <set>

using namespace std;

int n, x;
string command;

set <int> s;

int main(void) {
	cin.tie(0)->sync_with_stdio(false);

	cin >> n;

	for (int i = 0; i < n; i++) {
		cin >> command;

		if (command == "add") {
			cin >> x;
			s.insert(x);
		}
		else if (command == "remove") {
			cin >> x;
			if (s.count(x)) {
				s.erase(x);
			}
		}
		else if (command == "check") {
			cin >> x;
			if (s.count(x)) {
				cout << '1' << '\n';
			}
			else {
				cout << '0' << '\n';
			}
		}
		else if (command == "toggle") {
			cin >> x;
			if (s.count(x)) {
				s.erase(x);
			}
			else {
				s.insert(x);
			}
		}
		else if (command == "all") {
			s = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15 ,16, 17, 18, 19, 20 };
		}
		else if (command == "empty") {
			s = {};
		}
	}

	return 0;   
}