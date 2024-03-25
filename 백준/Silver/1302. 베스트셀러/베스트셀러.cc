#include <iostream>
#include <string>
#include <vector> // vector
#include <utility> // pair
#include <algorithm> // Sort

using namespace std;

int n;
string input;

bool compare(pair<string, int> a, pair<string, int> b) {
	if (a.second != b.second) return a.second > b.second;
	else return a.first < b.first;
}

int main(void) {
	cin.tie(0)->sync_with_stdio(false);

	cin >> n;

	vector <string> data;
	vector <pair<string, int>> result;

	for (int i = 0; i < n; i++) {
		cin >> input;
		data.push_back(input);
	}

	for (int i = 0; i < n; i++) {
		bool found = false;

		if (i == 0) {
			result.push_back({ data[i], 1 });
		}
		else {
			for (int j = 0; j < result.size(); j++) {
				if (result[j].first == data[i]) {
					result[j].second++;
					found = true;
					break;
				}
			}
		}
		if (!found) {
			result.push_back({ data[i], 1 });
		}
	}

	sort(result.begin(), result.end(), compare);

	cout << result[0].first << '\n';
	
	return 0;
}