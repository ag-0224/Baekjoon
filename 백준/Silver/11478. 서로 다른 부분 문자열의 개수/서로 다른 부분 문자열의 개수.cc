#include <iostream>
#include <set>
#include <string>

using namespace std;

string input;

set <string> s;

int main() {
    cin.tie(0)->sync_with_stdio(false);

    cin >> input;

    for (int i = 0; i < input.size(); i++) {
        string tmp = "";

        for (int j = i; j < input.size(); j++) {
            tmp += input[j];
            s.insert(tmp);
        }
    }

    cout << s.size();

    return 0;
}