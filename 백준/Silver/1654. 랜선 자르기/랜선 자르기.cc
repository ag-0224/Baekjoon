#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int n, k;
long input;
long mid;
long first, last;
long result;
long ans;

vector <long> v;

int main() {
    cin.tie(0)->sync_with_stdio(false);

    cin >> k >> n;

    for (int i = 0; i < k; i++) {
        cin >> input;
        v.push_back(input);
    }

    sort(v.begin(), v.end());

    first = 1;
    last = v[v.size() - 1];

    while (first <= last) {
        mid = (first + last) / 2;

        result = 0;
        for (int i = 0; i < k; i++) {
            result += v[i] / mid;
        }

        if (result >= n) {
            first = mid + 1;

            ans = max(ans, mid);
        }
        else {
            last = mid - 1;
        }
    }

    cout << ans << "\n";

    return 0;
}