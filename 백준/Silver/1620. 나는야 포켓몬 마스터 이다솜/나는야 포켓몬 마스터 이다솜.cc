#include <iostream>
#include <string>
#include <map>

using namespace std;

int n, m;
string num;
string name;
string input;

map <string, string> s;

int main() {
    cin.tie(0)->sync_with_stdio(false);

    cin >> n >> m;

    for (int i = 0; i < n; i++) {
        cin >> name;
        num = to_string(i + 1);
        s.insert(make_pair(name, num));
        s.insert(make_pair(num, name));
    }

    for (int i = 0; i < m; i++) {
        cin >> input;
        cout << s[input] << "\n";
    }

    return 0;
}