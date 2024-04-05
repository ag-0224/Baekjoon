#include <iostream>
#include <stack>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

string input, target;
stack<char> st;
stack<char> tmp;

int main(void) {
    cin.tie(0)->sync_with_stdio(false);

    cin >> input;
    cin >> target;

    for (int i = 0; i < input.size(); i++) {
        st.push(input[i]);

        if (st.size() >= target.size()) {

            bool check = true;
            tmp = stack<char>();
            for (int j = 0; j < target.size(); j++) {
                if (st.top() != target[target.size() - j - 1]) {
                    check = false;
                    break;
                }
                tmp.push(st.top());
                st.pop();
            }

            if (!check) {
                while (!tmp.empty()) {
                    st.push(tmp.top());
                    tmp.pop();
                }
            }
        }
    }

    string result;
    while (!st.empty()) {
        result += st.top();
        st.pop();
    }
    reverse(result.begin(), result.end());

    if (result.empty()) {
        cout << "FRULA";
    }
    else {
        cout << result;
    }

    return 0;
}