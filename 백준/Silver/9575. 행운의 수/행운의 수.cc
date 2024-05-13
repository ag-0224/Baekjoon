#include <iostream>
#include <set>

using namespace std;

int t;
int n, m, k;
int input;

int main() {
    cin.tie(0)->sync_with_stdio(false);

    cin >> t;

    for (int i = 0; i < t; i++) {

        set <int> a;
        set <int> b;
        set <int> c;

        set <int> result;

        cin >> n;

        for (int j = 0; j < n; j++) {
            cin >> input;
            a.insert(input);
        }

        cin >> m;

        for (int j = 0; j < m; j++) {
            cin >> input;
            b.insert(input);
        }

        cin >> k;

        for (int j = 0; j < k; j++) {
            cin >> input;
            c.insert(input);
        }

        for (auto a1 = a.begin(); a1 != a.end(); a1++) {
            for (auto b1 = b.begin(); b1 != b.end(); b1++) {
                for (auto c1 = c.begin(); c1 != c.end(); c1++) {
                    int tmp = *a1 + *b1 + *c1;

                    result.insert(tmp);
                }
            }
        }

        int cnt = 0;

        for (auto r = result.begin(); r != result.end(); r++) {
            int tmp = *r;

            bool check = true;

            while (1) {
                if (tmp == 0) {
                    break;
                }
                if (!(tmp % 10 == 5 || tmp % 10 == 8)) {
                    check = false;
                    break;
                }
                tmp = tmp / 10;
            }

            if (check) {
                cnt++;
            }
        }

        cout << cnt << "\n";
    }

    return 0;
}