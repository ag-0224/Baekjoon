#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int n, m;
int i, j;

vector <int> v;

int main() {
    cin.tie(0)->sync_with_stdio(false);

    cin >> n >> m;

    v.resize(n);
    for (int k = 0; k < n; k++) {
        v[k] = k + 1;
    }

    for (int k = 0; k < m; k++) {
        cin >> i >> j;
        reverse(v.begin() + i - 1, v.begin() + j);
    }

    for (int k = 0; k < n; k++) {
        cout << v[k] << " ";
    }

    return 0;
}