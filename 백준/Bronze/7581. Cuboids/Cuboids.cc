#include <bits/stdc++.h>

using namespace std;

int l, w, h, v;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

	while (true) {
		cin >> l >> w >> h >> v;

		if (l == 0 && w == 0 && h == 0 && v == 0) break;

		if (l == 0) l = v / (h * w);
		else if (w == 0) w = v / (l * h);
		else if (h == 0) h = v / (l * w);
		else if (v == 0) v = l * w * h;

		cout << l << " " << w << " " << h << " " << v << "\n";
	}

	return 0;
}