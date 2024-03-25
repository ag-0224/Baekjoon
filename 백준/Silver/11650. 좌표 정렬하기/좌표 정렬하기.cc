#include <iostream>
#include <string>
#include <vector> // vector
#include <utility> // pair
#include <algorithm> // Sort

using namespace std;

string str;
int n;

bool compare(pair<int, int> a, pair<int, int> b) {
	if (a.first == b.first) return a.second < b.second;
	else return a.first < b.first;
}

int main(void) {
	cin.tie(0)->sync_with_stdio(false);

	cin >> n;

	vector <pair<int, int>> graph;

	for (int i = 0; i < n; i++) {
		int x, y;
		cin >> x >> y;
		graph.push_back(make_pair(x, y));
	}

	sort(graph.begin(), graph.end(), compare);
	for (int i = 0; i < n; i++) {
		cout << graph[i].first << ' ' << graph[i].second << '\n';
	}
	
	return 0;
}