#include <iostream>
#include <queue>
#include <vector>
#include <utility>

using namespace std;

int n, k;
int pos, sec;
int ans;
queue <pair<int, int>> q;
vector <bool> visited;

void bfs() {

    while (!q.empty()) {
        pos = q.front().first;
        sec = q.front().second;
        q.pop();

        visited[pos] = true;

        if (pos == k) {
            ans = sec;
            return;
        }

        if (pos > 0 && pos * 2 < 100001 && !visited[pos * 2]) q.push({ pos * 2, sec });
        if (pos - 1 >= 0 && !visited[pos - 1]) q.push({ pos - 1, sec + 1 });
        if (pos + 1 < 100001 && !visited[pos + 1]) q.push({ pos + 1, sec + 1 });
    }
}

int main() {
    cin.tie(0)->sync_with_stdio(false);

    cin >> n >> k;
    
    visited = vector<bool>(100001, false);
    
    q.push({ n, 0 });

    bfs();

    cout << ans;

    return 0;
}