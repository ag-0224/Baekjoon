#include <iostream>
#include <map>
#include <utility>
#include <string>
#include <algorithm>

using namespace std;

int n, m;
string input;

map <string, string> words;

int main() {
    cin.tie(0)->sync_with_stdio(false);

    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> input;

        string tmp = input;
        if (input.size() >= 3) {
            sort(++tmp.begin(), --tmp.end());
        }

        words.insert(make_pair(tmp, input));
    }

    cin >> m;

    for (int i = 0; i < m; i++) {
        cin >> input;

        string tmp = input;
        if (input.size() >= 3) {
            sort(++tmp.begin(), --tmp.end());
        }

        cout << words[tmp] << " ";
    }

    return 0;
}