#include <iostream>
#include <string>
#include <vector>
#include <map>

using namespace std;

int n;
string name, ring;

map <string, vector<string>> m;
vector <pair<string, string>> couple;

int main(void) {
	cin.tie(0)->sync_with_stdio(false);

	cin >> n;

	for (int i = 0; i < n; i++) {
		cin >> name >> ring;

		if (ring != "-") {
			m[ring].push_back(name);
		}
	}

	for (auto x = m.begin(); x != m.end(); x++) {
		if (x->second.size() == 2) {
			couple.push_back({ x->second[0], x->second[1] });
		}
	}

	cout << couple.size() << "\n";
	for (int i = 0; i < couple.size(); i++) {
		cout << couple[i].first << " " << couple[i].second << "\n";
	}

	return 0;   
}