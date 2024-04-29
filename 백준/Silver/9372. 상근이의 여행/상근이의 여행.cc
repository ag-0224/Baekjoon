#include <iostream>

using namespace std;

int t;
int n, m;
int a, b;

int main() {
    cin.tie(0)->sync_with_stdio(false);

    cin >> t;

    for (int i = 0; i < t; i++) {
        cin >> n >> m;

        for (int j = 0; j < m; j++) {
            cin >> a >> b;
        }
        cout << n - 1 << "\n";
    }

    return 0;
}