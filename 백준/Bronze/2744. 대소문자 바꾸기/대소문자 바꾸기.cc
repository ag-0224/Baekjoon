#include <iostream>
#include <string>

using namespace std;

string input;

int main() {
    cin.tie(0)->sync_with_stdio(false);

    cin >> input;

    for (int i = 0; i < input.size(); i++) {
        if ('a' <= input[i] && input[i] <= 'z') {
            input[i] += 'A' - 'a';
        }
        else {
            input[i] -= 'A' - 'a';
        }
    }

    cout << input;
    
    return 0;
}