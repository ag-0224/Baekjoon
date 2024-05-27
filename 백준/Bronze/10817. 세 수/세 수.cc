#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int a, b, c;

vector <int> v;

int main(void) {
	cin.tie(0)->sync_with_stdio(false);

	cin >> a >> b >> c;

	v.push_back(a);
	v.push_back(b);
	v.push_back(c);

	sort(v.begin(), v.end());

	cout << v[1];

	return 0;   
}