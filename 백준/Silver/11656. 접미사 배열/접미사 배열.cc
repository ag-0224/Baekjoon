#include <iostream>
#include <string>
#include <vector> // vector
#include <utility> // pair
#include <algorithm> // Sort

using namespace std;

string input;

int main(void) {
	cin.tie(0)->sync_with_stdio(false);

	cin >> input;

	vector <string> dictionary;

	for (int i = 0; i < input.size(); i++) {
		dictionary.push_back(input.substr(i, input.size() - i));
	}

	sort(dictionary.begin(), dictionary.end());

	for (int i = 0; i < dictionary.size(); i++) {
		cout << dictionary[i] << '\n';
	}
	
	return 0;
}