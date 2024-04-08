#include <iostream>
#include <vector>
#include <queue>
#include <string>
#include <utility>

using namespace std;

int N, M;
string x;
vector <string> graph;
vector <vector<bool>> visited;
queue <pair<pair<int, int>, int>> q;

int dy[4] = { 1, 0, -1, 0 };
int dx[4] = { 0, 1, 0, -1 };

void BFS() {

	while (!q.empty()) {
		int y = q.front().first.first;
		int x = q.front().first.second;
		int cnt = q.front().second;
		q.pop();

		if (y == N - 1 && x == M - 1) {
			cout << cnt;
		}

		for (int k = 0; k < 4; k++) {
			int yy = y + dy[k];
			int xx = x + dx[k];

			if (yy < 0 || yy >= N || xx < 0 || xx >= M || visited[yy][xx] || graph[yy][xx] != '1')
				continue;

			visited[yy][xx] = true;
			q.push({ {yy, xx}, cnt + 1 });
		}
	}
}

int main(void) {
	cin.tie(0)->sync_with_stdio(false);

	cin >> N >> M;

	visited = vector<vector<bool>>(N, vector<bool>(M, false));
	for (int i = 0; i < N; i++) {
		cin >> x;
		graph.push_back(x);
	}

	visited[0][0] = true;
	q.push({ {0, 0}, 1 });

	BFS();

	return 0;
}