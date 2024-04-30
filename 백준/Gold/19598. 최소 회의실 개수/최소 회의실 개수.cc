#include <iostream>
#include <queue>

using namespace std;

int n;
int x, s, e;
int cnt;

priority_queue <pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> cls;
priority_queue <int, vector<int>, greater<int>> room;

int main() {
    cin.tie(0)->sync_with_stdio(false);

    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> s >> e;
        cls.push(make_pair(s, e));
    }

    for (int i = 0; i < n; i++) {
        if (room.empty()) cnt++;
        else {
            if (cls.top().first >= room.top()) room.pop();
            else cnt++;
        }
        room.push(cls.top().second);
        cls.pop();
    }

    cout << cnt;

    return 0;
}