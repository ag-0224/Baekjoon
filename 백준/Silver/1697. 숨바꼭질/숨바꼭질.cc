#include <iostream>
#include <queue>
#include <utility>
#include <vector>

using namespace std;

int n, k;
queue<pair<int, int>> q;
vector <bool> visited;

void bfs() {

    while (!q.empty()) {
        int pos = q.front().first;
        int sec = q.front().second;
        q.pop();

        if (pos == k) {
            cout << sec;
            break;
        }

        if (pos - 1 >= 0 && !visited[pos - 1]) {
            q.push({ pos - 1, sec + 1 });
            visited[pos - 1] = true;
        }
        if (pos + 1 <= 100000 && !visited[pos + 1]) {
            q.push({ pos + 1, sec + 1 });
            visited[pos + 1] = true;
        }
        if (2 * pos <= 100000 && !visited[2 * pos]) {
            q.push({ 2 * pos, sec + 1 });
            visited[2 * pos] = true;
        }
    }
}

int main() {
    cin.tie(0)->sync_with_stdio(false);
    cin >> n >> k;

    visited = vector<bool>(100001, false);

    q.push({ n, 0 });
    visited[n] = true;

    bfs();

    return 0;
}