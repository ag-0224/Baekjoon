#include <iostream>
#include <queue>
#include <utility>
#include <vector>

using namespace std;

int t;
int n;
long long x;
long long a, b;
long long result;

int main() {
    cin.tie(0)->sync_with_stdio(false);

    cin >> t;

    for (int i = 0; i < t; i++) {
        result = 1;

        cin >> n;

        priority_queue <long long, vector<long long>, greater<long long>> pq;

        for (int j = 0; j < n; j++) {
            cin >> x;
            pq.push(x);
        }

        while (pq.size() > 1) {
            a = pq.top();
            pq.pop();
            b = pq.top();
            pq.pop();
            pq.push(a * b);
            result *= ((a % 1000000007 * b % 1000000007) % 1000000007);
            result %= 1000000007;
        }

        cout << result << "\n";
    }

    return 0;
}