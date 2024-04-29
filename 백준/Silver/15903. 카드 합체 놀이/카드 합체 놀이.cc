#include <iostream>
#include <queue>

using namespace std;

int n, m;
long long a;
long long x, y;
long long result;

priority_queue <long long, vector<long long>, greater<long long>> pq;

int main() {
    cin.tie(0)->sync_with_stdio(false);

    cin >> n >> m;

    for (int i = 0; i < n; i++) {
        cin >> a;
        pq.push(a);
    }

    for (int i = 0; i < m; i++) {
        x = pq.top();
        pq.pop();
        y = pq.top();
        pq.pop();
        pq.push(x + y);
        pq.push(x + y);
    }

    while (!pq.empty()) {
        result += pq.top();
        pq.pop();
    }

    cout << result << "\n";

    return 0;
}