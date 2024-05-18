#include <iostream>
#include <string>
#include <vector>
#include <map>

using namespace std;

int n, cnt;
string a, b;

map <string, bool> m;

int main() {
    cin.tie(0)->sync_with_stdio(false);

    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> a >> b;

        if (a == "ChongChong") {
            m[b] = true;
        }
        if (b == "ChongChong") {
            m[a] = true;
        }

        if (m[a]) {
            m[b] = true;
        }
        if (m[b]) {
            m[a] = true;
        }
    }

    for (auto x : m) {
        if (x.second) {
            cnt++;
        }
    }

    cout << cnt;

    return 0;
}