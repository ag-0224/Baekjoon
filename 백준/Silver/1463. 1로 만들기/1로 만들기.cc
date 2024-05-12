#include <iostream>
#include <vector>

using namespace std;

int n;

vector <int> v;

int main() {
    cin.tie(0)->sync_with_stdio(false);

    cin >> n;

    v = vector <int>(1000001, 0);

    for (int i = 2; i <= n; i++) {
        v[i] = v[i - 1] + 1;

        if (i % 2 == 0) {
            v[i] = min(v[i], v[(int)(i / 2)] + 1);
        }
        if (i % 3 == 0) {
            v[i] = min(v[i], v[(int)(i / 3)] + 1);
        }
    }

    cout << v[n];

    return 0;
}