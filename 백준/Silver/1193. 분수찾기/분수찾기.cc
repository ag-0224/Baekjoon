#include <bits/stdc++.h>

using namespace std;

int X;

int board[5000][5000];

const int dy[4] = { 0, 1, 1, -1 };
const int dx[4] = { 1, -1, 0, 1 };

pair<int, int> go(int n) {
	pair<int, int> ret;

	int cnt = 1;

	int y = 0;
	int x = 0;

	bool check = false;
	while (cnt < n) {
		if (y == 0 && !check) {
			y = y + dy[0];
			x = x + dx[0];
			check = true;
		}
		else if (x == 0 && !check) {
			y = y + dy[2];
			x = x + dx[2];
			check = true;
		}
		else if ((x + y) % 2 == 1) {
			y = y + dy[1];
			x = x + dx[1];
			check = false;
		}
		else if ((x + y) % 2 == 0) {
			y = y + dy[3];
			x = x + dx[3];
			check = false;
		}

		cnt++;
	}  

	ret = { y, x };

	return ret;
}
 
int main() {
	cin >> X;

	auto ret = go(X);

	cout << ret.first + 1 << "/" << ret.second + 1;

	return 0;
}