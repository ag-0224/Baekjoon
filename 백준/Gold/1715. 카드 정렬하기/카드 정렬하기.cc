#include <iostream>
#include <queue>
#include <utility>
#include <vector>

using namespace std;

int n, x;
int a, b;
int cnt;

priority_queue <int, vector<int>, greater<int>> pq;

int main() {
    cin.tie(0)->sync_with_stdio(false);

    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> x;
        pq.push(x);
    }

    while (pq.size() > 1) {
        a = pq.top();
        pq.pop();
        b = pq.top();
        pq.pop();
        pq.push(a + b);
        cnt += a + b;
    }

    cout << cnt;

    return 0;
}