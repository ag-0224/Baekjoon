#include <iostream>
#include <string>

using namespace std;

int k;

string gist[3] = { "G...", ".I.T", "..S." };

int main(void) {
	cin.tie(0)->sync_with_stdio(false);

	cin >> k;

	for (int i = 0; i < 3; i++) {
		string temp = "";

		for (int j = 0; j < 4; j++) {
			for (int l = 0; l < k; l++) {
				temp += gist[i][j];
			}
		}

		for (int j = 0; j < k; j++) {
			cout << temp << "\n";
		}
	}

	return 0;   
}