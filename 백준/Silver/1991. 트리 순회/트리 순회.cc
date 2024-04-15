#include <iostream>
#include <vector>
#include <utility>

using namespace std;

int n;
char parent, u, v;
vector <pair<char, char>> node;

void preorder(char n) {

    pair <char, char> x = node[n];

    cout << n;
    if (x.first != '.') preorder(x.first);
    if (x.second != '.') preorder(x.second);
}

void inorder(char n) {
    pair <char, char> x = node[n];

    if (x.first != '.') inorder(x.first);
    cout << n;
    if (x.second != '.') inorder(x.second);
}

void postorder(char n) {
    pair <char, char> x = node[n];

    if (x.first != '.') postorder(x.first);
    if (x.second != '.') postorder(x.second);
    cout << n;
}

int main() {
    cin.tie(0)->sync_with_stdio(false);

    cin >> n;

    node.resize(10000, make_pair('.', '.'));

    for (int i = 0; i < n; i++) {
        cin >> parent >> u >> v;
        node[parent] = make_pair(u, v);
    }

    preorder('A'); 
    cout << "\n";
    inorder('A'); 
    cout << "\n";
    postorder('A');
    cout << "\n";

    return 0;
}