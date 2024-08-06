#include <bits/stdc++.h>

using namespace std;

int n, a[104][104], visited[104][104];
int d = 104, u;
int ret, ans;

const int dy[4] = { 1, 0, -1, 0 };
const int dx[4] = { 0, 1, 0, -1 };

void dfs(int y, int x, int t) {
	visited[y][x] = 1;
	for (int i = 0; i < 4; i++) {
		int ny = y + dy[i];
		int nx = x + dx[i];
		if (nx < 0 || nx >= n || ny < 0 || ny >= n) continue;
		if (a[ny][nx] > t && !visited[ny][nx]) {
			dfs(ny, nx, t);
		}
	}
}

int main() {
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	
	cin >> n;

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			cin >> a[i][j];
			d = min(d, a[i][j]);
			u = max(u, a[i][j]);
		}
	}

	for (int t = d - 1; t <= u; t++) {
		
		fill(&visited[0][0], &visited[0][0] + 104 * 104, 0);
		
		ans = 0;
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < n; j++) {
				if (a[i][j] > t && !visited[i][j]) {
					ans++;
					dfs(i, j, t);
				}
			}
		}

		ret = max(ret, ans);
	}

	cout << ret;

	return 0;
}