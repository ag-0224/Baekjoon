#include <iostream>
#include <string>
#include <vector> // vector
#include <utility> // pair
#include <algorithm> // Sort

using namespace std;

int n;
int kor;
int eng;
int math;
string input;

bool compare(pair<string, pair<int, pair<int, int>>> a, pair<string, pair<int, pair<int, int>>> b) {
	if (a.second.first != b.second.first) return a.second.first > b.second.first;
	else {
		if (a.second.second.first != b.second.second.first) return a.second.second.first < b.second.second.first;
		else {
			if (a.second.second.second != b.second.second.second) return a.second.second.second > b.second.second.second;
			else return a.first < b.first;
		}
	}
}

int main(void) {
	cin.tie(0)->sync_with_stdio(false);

	cin >> n;

	vector <pair<string, pair<int, pair<int, int>>>> data;

	for (int i = 0; i < n; i++) {
		cin >> input >> kor >> eng >> math;
		data.push_back({ input, { kor, {eng, math}} });
	}

	sort(data.begin(), data.end(), compare);

	for (int i = 0; i < n; i++) {
		cout << data[i].first << '\n';
	}
	
	return 0;
}