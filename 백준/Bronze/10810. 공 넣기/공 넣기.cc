#include <iostream>
#include <vector>

using namespace std;

int n, m;
int i, j, k;

vector <int> v;

int main() {
    cin.tie(0)->sync_with_stdio(false);

    cin >> n >> m;

    v.resize(n + 1);
    for (int s = 0; s < m; s++) {
        cin >> i >> j >> k;

        for (int h = i; h <= j; h++) {
            v[h] = k;
        }
    }

    for (int i = 1; i < n + 1; i++) {
        cout << v[i] << " ";
    }

    return 0;
}