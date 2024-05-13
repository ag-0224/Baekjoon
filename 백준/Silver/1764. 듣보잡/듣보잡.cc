#include <iostream>
#include <vector>
#include <map>
#include <algorithm>

using namespace std;

int n, m;

string input;
map <string, int> words;
vector <string> result;

int main() {
    cin.tie(0)->sync_with_stdio(false);

    cin >> n >> m;

    for (int i = 0; i < n; i++) {
        cin >> input;
        words.insert(make_pair(input, 1));
    }

    for (int i = 0; i < m; i++) {
        cin >> input;
        if (words[input]) {
            result.push_back(input);
        }
    }

    cout << result.size() << "\n";
    sort(result.begin(), result.end());
    for (string x : result)
        cout << x << "\n";

    return 0;
}