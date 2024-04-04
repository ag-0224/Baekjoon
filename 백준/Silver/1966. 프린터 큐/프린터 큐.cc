#include <iostream>
#include <queue>
#include <vector>
#include <utility>
#include <algorithm>

using namespace std;

int t, n, m, input;

bool compare(int a, int b) {
	return a > b;
}

int main(void) {
	cin.tie(0)->sync_with_stdio(false);

	cin >> t;

	for (int i = 0; i < t; i++) {
		cin >> n >> m;

		queue <pair<int ,bool>> q;
		vector <int> v;
		vector <pair<int, bool>> result;

		for (int j = 0; j < n; j++) {
			cin >> input;

			bool target = false;
			if (j == m) {
				target = true;
			}

			q.push(make_pair(input, target));
			v.push_back(input);
		}

		sort(v.begin(), v.end(), compare);

		int index = 0;
		while (!q.empty()) {
			int a = q.front().first;
			bool target = q.front().second;

			if (a == v[index]) {
				q.pop();
				result.push_back(make_pair(a, target));
				v[index++] = 0;
			}
			else {
				q.pop();
				q.push(make_pair(a, target));
			}
		}

		for (int i = 0; i < result.size(); i++) {
			if (result[i].second) cout << i + 1 << "\n";
		}
	}

	return 0;
}