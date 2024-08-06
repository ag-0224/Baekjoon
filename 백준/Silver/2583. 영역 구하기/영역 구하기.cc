#include <bits/stdc++.h>

using namespace std;

int m, n, k;
int lx, ly, rx, ry;
int ret, cnt;
int a[104][104];
bool visited[104][104];
vector<int> v;

const int dy[4] = { 1, 0, -1, 0 };
const int dx[4] = { 0, 1, 0, -1 };

void dfs(int y, int x) {
	visited[y][x] = 1;
	cnt++;
	for (int i = 0; i < 4; i++) {
		int ny = y + dy[i];
		int nx = x + dx[i];
		if (ny < 0 || ny >= m || nx < 0 || nx >= n) continue;
		if (a[ny][nx] == 0 && !visited[ny][nx]) {
			dfs(ny, nx);
		}
	}
}

int main() {
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

	cin >> m >> n >> k;

	while (k--) {
		cin >> lx >> ly >> rx >> ry;

		for (int i = ly; i < ry; i++) {
			for (int j = lx; j < rx; j++) {
				a[i][j] = 1;
			}
		}
	}

	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++) {
			if (a[i][j] == 0 && !visited[i][j]) {
				ret++;
				dfs(i, j);
				v.push_back(cnt);
				cnt = 0;
			}
		}
	}

	cout << ret << "\n";

	sort(v.begin(), v.end());

	for (int x : v) cout << x << " ";
	
	return 0;
}