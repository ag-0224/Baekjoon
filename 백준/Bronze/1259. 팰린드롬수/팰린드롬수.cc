#include <iostream>
#include <string>

using namespace std;

int main(void) {

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string input;

    while (1) {
        cin >> input;

        if (input == "0") {
            break;
        }

        int n;
        n = input.length();
        bool result = true;
        for (int i = 0; i < n / 2; i++) {
            if (input[i] != input[n - i - 1]) {
                result = false;
            }
        }
        if (result) {
            cout << "yes" << "\n";
        }
        else {
            cout << "no" << "\n";
        }
    }

    return 0;
}