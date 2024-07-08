#include <bits/stdc++.h>

using namespace std;

string s, temp;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	cin >> s;
	temp = s;

	reverse(temp.begin(), temp.end());

	cout << (s == temp ? 1 : 0);

	return 0;
}