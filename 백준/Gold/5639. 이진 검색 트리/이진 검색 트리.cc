#include <iostream>
#include <vector>
#include <utility>

using namespace std;

int root, n;
vector <pair<int, int>> node;

void postorder(int n) {
    pair<int, int> x = node[n];

    if (x.first != -1) postorder(x.first);
    if (x.second != -1) postorder(x.second);
    cout << n << "\n";
}

int main() {
    cin.tie(0)->sync_with_stdio(false);

    node.resize(1000001, make_pair(-1, -1));

    root = -1;

    while(cin >> n) {
        if (root == -1) {
            root = n;
        }
        else {
            int r = root;
            while (true) {
                if (r > n) {
                    if (node[r].first == -1) {
                        node[r].first = n;
                        break;
                    }
                    r = node[r].first;
                }
                else {
                    if (node[r].second == -1) {
                        node[r].second = n;
                        break;
                    }
                    r = node[r].second;
                }
            }
        }
    }

    postorder(root);

    return 0;
}