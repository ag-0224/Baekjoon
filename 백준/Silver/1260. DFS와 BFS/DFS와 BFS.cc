#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>

using namespace std;

int n, m, u, v, V;
vector <vector<int>> node;
vector <bool> check;
queue <int> q;

void DFS(int n) {
	check[n] = true;

	cout << n << " ";

	for (int x : node[n])
		if (!check[x]) {
			DFS(x);
		}
}

void BFS() {
	while (!q.empty()) {
		int n = q.front();
		cout << n << " ";
		q.pop();
		for (int x : node[n]) {
			if (!check[x]) {
				check[x] = true;
				q.push(x);
			}
		}
	}
}

int main(void) {
	cin.tie(0)->sync_with_stdio(false);

	cin >> n >> m >> V;

	node.resize(n + 1);
	check.resize(n + 1, false);

	for (int i = 0; i < m; i++) {
		cin >> u >> v;
		node[u].push_back(v);
		node[v].push_back(u);
		sort(node[v].begin(), node[v].end());
		sort(node[u].begin(), node[u].end());
	}

	DFS(V);

	check = vector<bool>(n + 1, false);
	cout << "\n";

	q.push(V);
	check[V] = true;
	BFS();

	return 0;
}