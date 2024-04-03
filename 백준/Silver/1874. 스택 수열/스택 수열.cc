#include <iostream>
#include <stack>
#include <vector>

using namespace std;

int n, input, i, index;
stack <int> st;
vector <int> v;
vector <char> result;

int main(void) {
	cin.tie(0)->sync_with_stdio(false);

	cin >> n;

	for (int i = 0; i < n; i++) {
		cin >> input;
		v.push_back(input);
	}

    int index = 0;
    for (int i = 1; i <= n; i++) {
        st.push(i);
        result.push_back('+');

        while (!st.empty() && st.top() == v[index]) {
            st.pop();
            result.push_back('-');
            index++;
        }
    }

    if (!st.empty()) {
        cout << "NO" << "\n";
    }
    else {
        for (char ch : result) {
            cout << ch << "\n";
        }
    }

	return 0;
}