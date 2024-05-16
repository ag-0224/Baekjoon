#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int n;

string ans;
vector <string> v;

bool compare(string a, string b) {
    return a + b > b + a;
}

int main() {
    cin.tie(0)->sync_with_stdio(false);

    cin >> n;

    v.resize(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }

    sort(v.begin(), v.end(), compare);

    ans = "";
    for (string x : v) {
        ans += x;
    }

    cout << (ans[0] == '0' ? "0" : ans);

    return 0;
}