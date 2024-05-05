#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int n, m;
int i, j;
int tmp;

vector <int> v;

int main() {
    cin.tie(0)->sync_with_stdio(false);

    cin >> n >> m;

    for (int k = 0; k < n; k++) {
        v.push_back(k + 1);
    }

    for (int k = 0; k < m; k++) {
        cin >> i >> j;
        tmp = v[i - 1];
        v[i - 1] = v[j - 1];
        v[j - 1] = tmp;
    }

    for (int k = 0; k < n; k++) {
        cout << v[k] << " ";
    }

    return 0;
}