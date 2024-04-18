#include <iostream>
#include <cmath>
#include <string>

using namespace std;

int l;
unsigned int a = 31;
unsigned int m = 1234567891;
unsigned int ans;
string input;

int main() {
    cin.tie(0)->sync_with_stdio(false);

    cin >> l;

    cin >> input;

    for (int i = 0; i < l; i++) {
        ans += (input[i] - 'a' + 1) * (unsigned int)pow(a, i) % m;
    }

    cout << ans;
    
    return 0;
}