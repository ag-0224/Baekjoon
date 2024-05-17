#include <iostream>
#include <string>

using namespace std;

string input;

int main() {
    cin.tie(0)->sync_with_stdio(false);

    cin >> input;

    bool check = true;
    for (int i = 0; i < input.size() / 2; i++) {
        if (input[i] != input[input.size() - i - 1]) {
            check = false;
            break;
        }
    }

    cout << (check ? 1 : 0);

    return 0;
}