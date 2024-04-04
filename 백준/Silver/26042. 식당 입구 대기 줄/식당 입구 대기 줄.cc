#include <iostream>
#include <queue>
#include <utility>
#include <vector>
#include <algorithm>

using namespace std;

int n, command, number;
queue <int> q;
vector <pair<int, int>> v;

bool compare(pair<int, int> a, pair<int, int> b) {
	if (a.first == b.first) return a.second < b.second;
	else return a > b;
}

int main(void) {
	cin.tie(0)->sync_with_stdio(false);

	cin >> n;

	for (int i = 0; i < n; i++) {
		cin >> command;
		
		if (command == 1) {
			cin >> number;
			q.push(number);
			v.push_back(make_pair(q.size(), number));
		}
		else {
			q.pop();
		}
	}

	sort(v.begin(), v.end(), compare);

	cout << v[0].first << " " << v[0].second << "\n";

	return 0;
}