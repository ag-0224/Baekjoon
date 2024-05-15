#include <iostream>
#include <set>
#include <string>

using namespace std;

int n, m;
int cnt;
string input;

set <string> s;

int main() {
    cin.tie(0)->sync_with_stdio(false);

    cin >> n >> m;

    for (int i = 0; i < n; i++) {
        cin >> input;
        s.insert(input);
    }

    for (int i = 0; i < m; i++) {
        cin >> input;
        if (s.count(input)) {
            cnt++;
        }
    }

    cout << cnt;

    return 0;
}