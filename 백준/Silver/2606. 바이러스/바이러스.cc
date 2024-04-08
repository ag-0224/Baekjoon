#include <iostream>
#include <vector>

using namespace std;

int n, m, u, v, cnt;
vector <vector<int>> node;
vector <bool> check;

void DFS(int n) {
	check[n] = true;

	for (int x : node[n])
		if (!check[x]) {
			cnt++;
			DFS(x);
		}		
}

int main(void) {
	cin.tie(0)->sync_with_stdio(false);

	cin >> n >> m;

	node.resize(n + 1);
	check.resize(n + 1, false);

	for (int i = 0; i < m; i++) {
		cin >> u >> v;
		node[u].push_back(v);
		node[v].push_back(u);
	}

	DFS(1);

	cout << cnt;

	return 0;
}