#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

int N, cnt;
int yy, xx;
string x;

vector <string> graph;
vector <vector<bool>> visited;
vector <int> result;

int dy[4] = { 1, 0, -1, 0 };
int dx[4] = { 0, 1, 0, -1 };

void dfs(int y, int x) {
	visited[y][x] = true;

	for (int k = 0; k < 4; k++) {
		yy = y + dy[k];
		xx = x + dx[k];
		if (xx < 0 || xx >= N || yy < 0 || yy >= N || visited[yy][xx] || graph[yy][xx] == '0')
			continue;

		cnt += 1;
		dfs(yy, xx);
	}
}

int main(void) {
	cin.tie(0)->sync_with_stdio(false);

	cin >> N;

	for (int i = 0; i < N; i++) {
		cin >> x;
		graph.push_back(x);
	}

	visited = vector<vector<bool>>(N, vector<bool>(N, false));
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			if (!visited[i][j] && graph[i][j] == '1') {
				cnt = 1;
				dfs(i, j);
				result.push_back(cnt);
			}
		}
	}

	cout << result.size() << "\n";

	sort(result.begin(), result.end());

	for (int x : result)
		cout << x << "\n";

	return 0;
}