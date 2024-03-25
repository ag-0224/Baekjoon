#include <iostream>
#include <string>
#include <vector> // vector
#include <utility> // pair
#include <algorithm> // Sort

using namespace std;

int n;
string input;

bool compare(string a, string b) {
	if (a.size() != b.size()) return a.size() < b.size();

	else {
		int result_a = 0;
		int result_b = 0;
		for (int i = 0; i < a.size(); i++) {
			if ('0' <= a[i] && a[i] <= '9') {
				result_a += int(a[i]) - 48;
			}
			if ('0' <= b[i] && b[i] <= '9') {
				result_b += int(b[i]) - 48;
			}
		}
		if (result_a != result_b) return result_a < result_b;
		else return a < b;
	}
}

int main(void) {
	cin.tie(0)->sync_with_stdio(false);

	cin >> n;

	vector <string> data;

	for (int i = 0; i < n; i++) {
		cin >> input;
		data.push_back(input);
	}

	sort(data.begin(), data.end(), compare);

	for (int i = 0; i < n; i++) {
		cout << data[i] << '\n';
	}
	
	return 0;
}