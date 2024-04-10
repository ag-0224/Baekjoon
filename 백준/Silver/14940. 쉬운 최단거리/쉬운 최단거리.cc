#include <iostream>
#include <vector>
#include <queue>
#include <utility>

using namespace std;

int n, m, input, x, y;

vector <vector<int>> board;
vector <vector<int>> visited;
pair <int, int> target;
queue <pair<int, int>> q;

int dy[4] = { 1, 0, -1, 0 };
int dx[4] = { 0, 1, 0, -1 };

void bfs() {

    while(!q.empty()) {
        y = q.front().first, x = q.front().second;
        q.pop();

        for (int k = 0; k < 4; k++) {
            int yy = y + dy[k];
            int xx = x + dx[k];

            if (yy < 0 || yy >= n || xx < 0 || xx >= m || visited[yy][xx] || board[yy][xx] != 1)
                continue;

            visited[yy][xx] += (visited[y][x] + 1);
            q.push({ yy, xx });
        }
    }
}

int main() {
    cin.tie(0)->sync_with_stdio(false);

    cin >> n >> m;

    board = vector<vector<int>>(n, vector<int>(m));
    visited = vector<vector<int>>(n, vector<int>(m, 0));
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> input;
            board[i][j] = input;
            if (input == 2) {
                target = { i, j };
            }
        }
    }

    q.push(target);
    bfs();

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (board[i][j] == 1 && visited[i][j] == 0) {
                cout << -1 << " ";
                continue;
            }
            cout << visited[i][j] << " ";
        }
        cout << "\n";
    }

    return 0;
}