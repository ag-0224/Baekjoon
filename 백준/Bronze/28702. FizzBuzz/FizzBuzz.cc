#include <bits/stdc++.h>

using namespace std;

int ret, idx;
string s;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

	int index = 0;
	for (int i = 0; i < 3; i++) {
		cin >> s;
		if (atoi(s.c_str()) != 0) {
			ret = atoi(s.c_str());
			idx = index;
		}
		index++;
	}

	switch (idx) {
	case 0:
		ret += 3;
		break;
	case 1:
		ret += 2;
		break;
	case 2:
		ret += 1;
		break;
	default:
		break;
	}

	if (ret % 5 == 0 && ret % 3 == 0) {
		cout << "FizzBuzz" << "\n";
	}
	else if (ret % 5 == 0) {
		cout << "Buzz" << "\n";
	}
	else if (ret % 3 == 0) {
		cout << "Fizz" << "\n";
	}
	else {
		cout << ret << "\n";
	}

	return 0;
}