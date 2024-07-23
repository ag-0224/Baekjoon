#include <bits/stdc++.h>

using namespace std;

int n, m;
int ret;

int board[10][10], visited[10][10];
vector<pair<int, int>> vir, war;

const int dy[4] = {1, 0, -1, 0};
const int dx[4] = {0, 1, 0, -1};

void dfs(int y, int x) {
	for (int i = 0; i < 4; i++) {
		int ny = y + dy[i];
		int nx = x + dx[i];

		if (ny >= n || ny < 0 || nx >= m || nx < 0 || visited[ny][nx] || board[ny][nx] == 1)
			continue;

		visited[ny][nx] = 1;

		dfs(ny, nx);
	}
}

int go() {
	memset(visited, 0, sizeof(visited));

	for (auto x : vir) {
		visited[x.first][x.second] = 1;
		dfs(x.first, x.second);
	}

	int cnt = 0;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			if (board[i][j] == 0 && visited[i][j] == 0) cnt++;
		}
	}

	return cnt;
}

int main() {
	cin >> n >> m;

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cin >> board[i][j];
			if (board[i][j] == 2) vir.push_back({ i, j });
			if (board[i][j] == 0) war.push_back({ i, j });
		}
	}

	for (int i = 0; i < war.size(); i++) {
		for (int j = 0; j < i; j++) {
			for (int k = 0; k < j; k++) {
				board[war[i].first][war[i].second] = 1;
				board[war[j].first][war[j].second] = 1;
				board[war[k].first][war[k].second] = 1;

				ret = max(ret, go());

				board[war[i].first][war[i].second] = 0;
				board[war[j].first][war[j].second] = 0;
				board[war[k].first][war[k].second] = 0;
			}
		}
	}

	cout << ret;

	return 0;
}
