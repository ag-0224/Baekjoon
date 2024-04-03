#include <iostream>
#include <queue>
#include <utility>
#include <string>

using namespace std;

int n;
int id;
string name;
queue <pair<string, int>> q;

int main(void) {
	cin.tie(0)->sync_with_stdio(false);

	cin >> n;

	for (int i = 0; i < n; i++) {
		cin >> name >> id;
		q.push(make_pair(name, id));
	}

	while (q.size() != 1) {
		int m = q.front().second;
		q.pop();
		for (int i = 0; i < m - 1; i++) {
			q.push(q.front());
			q.pop();
		}
		q.pop();
	}

	cout << q.front().first;
	
	return 0;
}