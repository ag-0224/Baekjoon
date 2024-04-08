#include <iostream>
#include <vector>

using namespace std;

int T, M, N, K, X, Y, cnt;
vector <vector<int>> graph;
vector <vector<bool>> visited;

int dy[4] = { 1, 0, -1, 0 };
int dx[4] = { 0, 1, 0, -1 };

void DFS(int y, int x) {
	for (int i = 0; i < 4; i++) {
		int yy = y + dy[i];
		int xx = x + dx[i];
		if (xx < 0 || xx >= M || yy < 0 || yy >= N || visited[yy][xx] || graph[yy][xx] != 1)
			continue;
		visited[yy][xx] = true;
		DFS(yy, xx);
	}
}

int main(void) {
	cin.tie(0)->sync_with_stdio(false);

	cin >> T;

	for (int i = 0; i < T; i++) {

		cin >> M >> N >> K;

		graph = vector<vector<int>>(N, vector<int>(M));
		visited = vector<vector<bool>>(N, vector<bool>(M, false));

		for (int j = 0; j < K; j++) {
			cin >> X >> Y;

			graph[Y][X] = 1;
		}

		cnt = 0;
		for (int i = 0; i < N; i++) {
			for (int j = 0; j < M; j++) {
				if (!visited[i][j] && graph[i][j] == 1) {
					visited[i][j] = true;
					cnt++;
					DFS(i, j);
				}
			}
		}

		cout << cnt << "\n";
	}
	
	return 0;
}