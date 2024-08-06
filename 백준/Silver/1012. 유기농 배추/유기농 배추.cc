#include <bits/stdc++.h>

using namespace std;

int t;
int n, m, k, y, x;
int ret;

int a[54][54];
bool visited[54][54];

const int dy[4] = { 1, 0, -1, 0 };
const int dx[4] = { 0, 1, 0, -1 };

void dfs(int y, int x) {
	visited[y][x] = 1;
	for (int i = 0; i < 4; i++) {
		int ny = y + dy[i];
		int nx = x + dx[i];

		if (nx < 0 || nx >= m || ny < 0 || ny >= n) continue;
		if (a[ny][nx] == 1 && !visited[ny][nx]) {
			dfs(ny, nx);
		}
	}
}

int main() {
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

	cin >> t;

	while (t--) {
		cin >> m >> n >> k;

		memset(a, 0, sizeof(a));
		memset(visited, 0, sizeof(visited));

		while (k--) {
			cin >> x >> y;

			a[y][x] = 1;
		}

		ret = 0;
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < m; j++) {
				if (a[i][j] == 1 && !visited[i][j]) {
					dfs(i, j);
					ret++;
				}
			}
		}

		cout << ret << "\n";
	}

	return 0;
}