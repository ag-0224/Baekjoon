#include <iostream>
#include <string>
#include <set>

using namespace std;

int n;
int cnt;
string input;

set <string> s;

int main() {
    cin.tie(0)->sync_with_stdio(false);

    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> input;
        s.insert(input);
    }

    for (auto t = s.begin(); t != s.end(); t++) {
        string tmp = *t;

        if (tmp.size() >= 6) {
            string test = "";

            for (int i = 5; i >= 0; i--) {
                test += tmp[tmp.size() - i - 1];
            }
            if (test == "Cheese") {
                cnt++;
            }
        }
    }

    if (cnt >= 4) {
        cout << "yummy" << "\n";
    }
    else {
        cout << "sad" << "\n";
    }

    return 0;
}