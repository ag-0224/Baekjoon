#include <iostream>
#include <queue>
#include <utility>
#include <vector>
#include <algorithm>

using namespace std;

int n;
int p, d;
int result;

priority_queue <int, vector<int>, greater<int>> pq;
vector <pair<int, int>> cls;

int main() {
    cin.tie(0)->sync_with_stdio(false);

    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> p >> d;

        cls.push_back(make_pair(d, p));
    }

    sort(cls.begin(), cls.end());

    for (int i = 0; i < n; i++) {
        pq.push(cls[i].second);
        if (pq.size() > cls[i].first) {
            pq.pop();
        }
    }

    while (!pq.empty()) {
        result += pq.top();
        pq.pop();
    }

    cout << result;

    return 0;
}