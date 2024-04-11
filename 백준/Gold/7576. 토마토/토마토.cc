#include <iostream>
#include <vector>
#include <queue>
#include <utility>

using namespace std;

vector <vector<int>> board;
vector <vector<bool>> visited;
vector <pair<int, int>> start;
queue <pair<int, int>> q;

int m, n, input;
int y, x, cnt;
int ans;
bool result;

int dy[4] = { 1, 0, -1, 0 };
int dx[4] = { 0, 1, 0, -1 };

void bfs() {
	while (!q.empty()) {
		y = q.front().first; x = q.front().second;
		q.pop();
		
		for (int k = 0; k < 4; k++) {
			int yy = y + dy[k];
			int xx = x + dx[k];

			if (xx < 0 || xx >= m || yy < 0 || yy >= n || visited[yy][xx] || board[yy][xx] != 0)
				continue;

			visited[yy][xx] = true;
			board[yy][xx] += board[y][x] + 1;
			q.push({yy, xx});
		}
	}
}

int main() {
	cin.tie(0)->sync_with_stdio(false);

	cin >> m >> n;

	board = vector<vector<int>>(n, vector<int>(m));
	visited = vector<vector<bool>>(n, vector<bool>(m, false));
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cin >> input;
			board[i][j] = input;

			if (input == 1) {
				start.push_back({i, j});
			}
		}
	}

	for (int i = 0; i < start.size(); i++) {
		q.push({start[i].first, start[i].second});
		visited[start[i].first][start[i].second] = true;
	}

	bfs();

	result = true;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			if (!board[i][j]) {
				result = false;
				break;
			}
			if (board[i][j] > ans) {
				ans = board[i][j];
			}
		}
	}
	
	cout << (result ? ans - 1 : -1);
 
	return 0;
}