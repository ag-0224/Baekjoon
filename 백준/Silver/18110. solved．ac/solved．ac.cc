#include <iostream>
#include <cmath>
#include <vector>
#include <algorithm>

using namespace std;

int n;
int input;
int r;
double sum;

vector <int> v;

int main() {
    cin.tie(0)->sync_with_stdio(false);
    
    cin >> n;

    if (!n) {
        cout << 0;
        return 0;
    }

    for (int i = 0; i < n; i++) {
        cin >> input;
        v.push_back(input);
    }

    r = round((float)(n * 0.15));

    sort(v.begin(), v.end());

    for (int i = r; i < n - r; i++)
        sum += v[i];

     cout << (int)(round(sum / (n - 2 * r)));

    return 0;
}