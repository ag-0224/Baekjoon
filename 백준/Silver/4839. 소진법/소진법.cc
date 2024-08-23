#include <bits/stdc++.h>

using namespace std;

int n;

vector<int> prime{ 2, 3, 5, 7, 11, 13, 17, 19, 23 };
vector<int> v(9, 1);

int main() {
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    for (int i = 0; i < 9; i++) {
        if (i == 0) {
            v[i] = prime[i];
            continue;
        }
        v[i] = v[i - 1] * prime[i];
    }

    while (cin >> n) {
        if (n == 0) break;

        int origin = n;

        vector<string> ret;

        for (int i = v.size() - 1; i >= 0; i--) {
            if (v[i] <= n) {
                int a = n / v[i];
                n %= v[i];

                string tmp = to_string(a);

                for (int j = 0; j <= i; j++) {
                    tmp += "*" + to_string(prime[j]);
                }

                ret.push_back(tmp);
            }
        }

        cout << origin << " = ";

        if (n > 0) cout << n;
        for (int i = ret.size() - 1; i >= 0; i--) {
            if (i != ret.size() - 1 || n > 0)
                cout << " + ";
            cout << ret[i];
        }

        cout << "\n";
    }

	return 0;
}