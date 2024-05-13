#include <iostream>
#include <vector>
#include <set>

using namespace std;

int t;
int n, m;
int input;

int main() {
    cin.tie(0)->sync_with_stdio(false);

    cin >> t;

    for (int i = 0; i < t; i++) {
        cin >> n;

        set <int> n1;
        vector <int> n2;

        for (int j = 0; j < n; j++) {
            cin >> input;
            n1.insert(input);
        }
        
        cin >> m;

        for (int j = 0; j < m; j++) {
            cin >> input;
            n2.push_back(input);
        }

        for (int x : n2) {
            cout << n1.count(x) << "\n";
        }

    }

    return 0;
}