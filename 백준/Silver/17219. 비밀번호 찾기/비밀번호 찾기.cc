#include <iostream>
#include <string>
#include <map>

using namespace std;

int n, m;
string w, p;

map <string, string> password;

int main() {
    cin.tie(0)->sync_with_stdio(false);

    cin >> n >> m;

    for (int i = 0; i < n; i++) {
        cin >> w >> p;
        password[w] = p;
    }

    for (int i = 0; i < m; i++) {
        cin >> w;
        cout << password[w] << "\n";
    }

    return 0;
}