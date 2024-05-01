#include <iostream>
#include <queue>
#include <utility>
#include <vector>

using namespace std;

int t;
int k, x;
long long a, b;


int main() {
    cin.tie(0)->sync_with_stdio(false);

    cin >> t;

    for (int i = 0; i < t; i++) {
        long long result = 0;

        cin >> k;

        priority_queue <long long, vector<long long>, greater<long long>> pq;

        for (int j = 0; j < k; j++) {
            cin >> x;
            pq.push(x);
        }

        while (pq.size() > 1) {
            a = pq.top();
            pq.pop();
            b = pq.top();
            pq.pop();
            pq.push(a + b);
            result += a + b;
        }

        cout << result << "\n";
    }

    return 0;
}