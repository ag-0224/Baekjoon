#include <iostream>
#include <vector>

using namespace std;

int m, n;
int cnt;

vector <vector<int>> v;
vector <vector<bool>> visited;

int dy[8] = { 1, 1, 1, 0, 0, -1, -1, -1 };
int dx[8] = { 1, 0, -1, -1, 1, -1, 0, 1 };

void dfs(int y, int x) {
	for (int i = 0; i < 8; i++) {
		int yy = y + dy[i];
		int xx = x + dx[i];

		if (xx < 0 || xx >= n || yy < 0 || yy >= m || visited[yy][xx] || !v[yy][xx])
			continue;

		visited[yy][xx] = true;
		dfs(yy, xx);
	}
}

int main(void) {
	cin.tie(0)->sync_with_stdio(false);

	cin >> m >> n;

	v = vector<vector<int>>(m, vector<int>(n, 0));
	visited = vector<vector<bool>>(m, vector<bool>(n, false));

	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++) {
			cin >> v[i][j];
		}
	}

	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++) {
			if (!visited[i][j] && v[i][j]) {
				visited[i][j] = true;
				dfs(i, j);
				cnt++;
			}
		}
	}

	cout << cnt;

	return 0;   
}