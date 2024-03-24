#include <iostream>
#include <string>

using namespace std;

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    string input;
    for (int i = 0; i < n; i++) {
        cin >> input;

        int result = 0;
        int count = 0;
        for (int j = 0; j < input.length(); j++) {
            if (input[j] == 'O') {
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