#include <iostream>
#include <queue>
#include <vector>
#include <utility>

using namespace std;

int m, n, h;
int input;
int z, y, x;
int ans;
bool result;

vector <vector<vector<int>>> board;
vector <vector<vector<bool>>> visited;
vector <pair<pair<int, int>, int>> start;
queue <pair<pair<int, int>, int>> q;

int dz[6] = { 1, -1, 0, 0, 0, 0 };
int dy[6] = { 0, 0, 1, 0, -1, 0 };
int dx[6] = { 0, 0, 0, -1, 0, 1 };

void bfs() {
	while (!q.empty()) {
		z = q.front().first.first;
		y = q.front().first.second;
		x = q.front().second;
		q.pop();

		for (int k = 0; k < 6; k++) {
			int zz = z + dz[k];
			int yy = y + dy[k];
			int xx = x + dx[k];

			if (xx < 0 || xx >= m || yy < 0 || yy >= n || zz < 0 || zz >= h || visited[zz][yy][xx] || board[zz][yy][xx] != 0)
				continue;

			visited[zz][yy][xx] = true;
			board[zz][yy][xx] += board[z][y][x] + 1;
			q.push({ { zz, yy }, xx });
		}
	}
}

int main() {
	cin.tie(0)->sync_with_stdio(false);

	cin >> m >> n >> h;

	board = vector<vector<vector<int>>>(h, vector<vector<int>>(n, vector<int>(m)));
	visited = vector<vector<vector<bool>>>(h, vector<vector<bool>>(n, vector<bool>(m, false)));
	for (int k = 0; k < h; k++) {
		for (int j = 0; j < n; j++) {
			for (int i = 0; i < m; i++) {
				cin >> input;
				board[k][j][i] = input;
				if (input == 1) {
					start.push_back({ { k, j }, i });
				}
			}
		}
	}

	for (int i = 0; i < start.size(); i++) {
		int c = start[i].first.first;
		int b = start[i].first.second;
		int a = start[i].second;
		visited[c][b][a] = true;
		q.push(start[i]);
	}

	bfs();

	result = true;
	ans = 0;
	for (int k = 0; k < h; k++) {
		for (int j = 0; j < n; j++) {
			for (int i = 0; i < m; i++) {
				if (board[k][j][i] == 0) {
					result = false;
					break;
				}
				ans = max(ans, board[k][j][i]);
			}
		}
	}

	cout << (result ? ans - 1 : -1);

	return 0;
}