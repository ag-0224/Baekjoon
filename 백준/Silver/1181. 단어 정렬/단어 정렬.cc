#include <iostream>
#include <string>
#include <vector> // vector
#include <utility> // pair
#include <algorithm> // Sort

using namespace std;

int n;
string input;

bool compare(string a, string b) {
	if (a.size() == b.size()) return a < b;
	else return a.size() < b.size();
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
		if (i == 0) cout << data[i] << "\n";
		else {
			if (data[i - 1] != data[i]) cout << data[i] << "\n";
		}
	}
	
	return 0;
}