#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

string a, b;

int main() {
    cin.tie(0)->sync_with_stdio(false);

    cin >> a >> b;
    
    reverse(a.begin(), a.end());
    reverse(b.begin(), b.end());
    if (stoi(a) > stoi(b)) {
        cout << a << "\n";
    }
    else {
        cout << b << "\n";
    }

    return 0;
}