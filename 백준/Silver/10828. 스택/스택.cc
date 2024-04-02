#include <iostream>
#include <stack>
#include <string>

using namespace std;

int n;
string command;
stack<int> st;

int main(void) {
	cin.tie(0)->sync_with_stdio(false);
	
	cin >> n;

	st = stack<int>();

	for (int i = 0; i < n; i++) {
		cin >> command;

		if (command == "push") {
			int s;
			cin >> s;
			st.push(s);
		}
		else if (command == "top") {
			if (!st.empty()) cout << st.top() << "\n";
			else cout << "-1" << "\n";
		}
		else if (command == "size") {
			cout << st.size() << "\n";
		}
		else if (command == "empty") {
			cout << st.empty() << "\n";
		}
		else {
			if (!st.empty()) {
				cout << st.top() << "\n";
				st.pop();
			}
			else {
				cout << "-1" << "\n";
			}
		}
	}

	return 0;
}