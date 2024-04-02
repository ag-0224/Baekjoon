#include <iostream>
#include <string>
#include <stack>

using namespace std;

string input;
stack <char> st;

int main(void) {
	cin.tie(0)->sync_with_stdio(false);

	getline(cin, input);

	st = stack <char>();
	for (int i = 0; i < input.size(); i++) {
		if (input[i] != '<' && input[i] != '>') {
			if (input[i] != ' ') st.push(input[i]);
			else {
				while (!st.empty()) {
					cout << st.top();
					st.pop();
				}
				cout << input[i];
			}
			if (i == input.size() - 1 || input[i + 1] == '<') {
				while (!st.empty()) {
					cout << st.top();
					st.pop();
				}
			}
		}
		else {
			if (input[i] == '<') {
				while (!st.empty()) {
					cout << st.top();
					st.pop();
				}
				cout << '<';
				while (input[i++] != '>') {
					cout << input[i];
				}
				i--;
			}
		}
	}

	return 0;
}