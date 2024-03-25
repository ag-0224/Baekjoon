#include <iostream>
#include <string>

using namespace std;

int main(void) {
	cin.tie(0)->sync_with_stdio(false);

	int n;
	cin >> n;

	
	for (int i = 0; i < n; i++) {
		int result = 0;
		int count = 0;

		string str;
		cin >> str;
		
		for (int j = 0; j < str.length(); j++) {
			if (str[j] == 'O') {
				result += ++count;
			 }
			else {
				count = 0;
			}
			
		}
		cout << result << '\n';
	}

	return 0;
}