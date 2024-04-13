#include <iostream>
#include <queue>
#include <utility>
#include <vector>

using namespace std;

int n, k;
int total, result;
bool first;
queue<pair<int, int>> q;
vector <bool> visited;

void bfs() {
    first = true;
    total = 0;

    while (!q.empty()) {
        int pos = q.front().first;
        int sec = q.front().second;
        q.pop();

        visited[pos] = true;

        if (!first && pos == k && sec == result) {
            total++;
        }

        if (first && pos == k) {
            total++;
            result = sec;
            first = false;
        }

        if (pos - 1 >= 0 && !visited[pos - 1]) {
            q.push({ pos - 1, sec + 1 });
        }
        if (pos + 1 <= 100000 && !visited[pos + 1]) {
            q.push({ pos + 1, sec + 1 });
        }
        if (2 * pos <= 100000 && !visited[2 * pos]) {
            q.push({ 2 * pos, sec + 1 });
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

    cout << result << "\n";
    cout << total << "\n";

    return 0;
}