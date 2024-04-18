#include <iostream>
#include <string>

using namespace std;

int l;
long long r = 1;
long long m = 1234567891;
long long ans;
string input;

int main() {
    cin.tie(0)->sync_with_stdio(false);

    cin >> l;

    cin >> input;

    for (int i = 0; i < l; i++) {
        ans += ((long(input[i]) - 'a' + 1) * r) % m;
        r = (r * 31) % m;
    }

    cout << ans % m;
    
    return 0;
}