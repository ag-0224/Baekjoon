#include <iostream>
#include <string>
#include <stack>

using namespace std;

string infix, postfix;
stack<char> st;

int get_priority(char op) {
	if (op == '*' || op == '/') return 3;
	if (op == '+' || op == '-') return 2;
	if (op == '(' || op == ')') return 1;
	return 0;
}

int main(void) {
	cin.tie(0)->sync_with_stdio(false);

	cin >> infix;

	for (int i = 0; i < infix.size(); i++) {
		if (!get_priority(infix[i])) {
			postfix += infix[i];
		}
		else if (infix[i] == '(') {
			st.push(infix[i]);
		}
		else if (infix[i] == ')') {
			while (!st.empty() && st.top() != '(') {
				postfix += st.top();
				st.pop();
			}
			st.pop();
		}
		else {
			while (!st.empty() && get_priority(infix[i]) <= get_priority(st.top())) {
				postfix += st.top();
				st.pop();
			}
			st.push(infix[i]);
		}
	}

	while (!st.empty()) {
		postfix += st.top();
		st.pop();
	}

	cout << postfix;

	return 0;
}