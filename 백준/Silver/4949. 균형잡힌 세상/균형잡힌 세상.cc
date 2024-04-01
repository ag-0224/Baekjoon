#include <iostream>
#include <stack>
#include <string>
#include <vector>

using namespace std;

string input;
stack <char> st;

int main(void) {
	cin.tie(0)->sync_with_stdio(false);

	while (true) {
		getline(cin, input);

		st = stack<char>();

		if (input == ".") break;

		for (int i = 0; i < input.size(); i++) {
			if (input[i] == '(' || input[i] == ')' || input[i] == '[' || input[i] == ']') {
				st.push(input[i]);

				if (input[i] == ']' && st.size() >= 2) {
					st.pop();
					if (st.top() == '[') {
						st.pop();
					}
					else {
						st.push(input[i]);
					}
				}
				else if (input[i] == ')' && st.size() >= 2) {
					st.pop();
					if (st.top() == '(') {
						st.pop();
					}
					else {
						st.push(input[i]);
					}
				}
			}
		}

		if (st.empty()) cout << "yes" << "\n";
		else cout << "no" << "\n";
	}

	return 0;
}