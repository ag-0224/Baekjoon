#include <iostream>
#include <string>

using namespace std;

int n, cnt;
string s;

int main() {
    cin.tie(0)->sync_with_stdio(false);

    cin >> n;
    cin >> s;

    for (int i = 0; i < n; i++) {
        if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u') {
            cnt++;
        }
    }

    cout << cnt;

    return 0;
}