#include <iostream>
#include <vector>
#include <algorithm>
#include <math.h>

using namespace std;

vector <int> v;

int arithmetic_mean() {
    double ans = 0;

    for (int i = 0; i < 5; i++) {
        ans += v[i];
    }

    return round(ans / 5);
}

int median() {
    return v[(5 - 1) / 2];
}

int main() {
    cin.tie(0)->sync_with_stdio(false);

    v.resize(5);
    for (int i = 0; i < 5; i++) {
        cin >> v[i];
    }

    sort(v.begin(), v.end());

    cout << arithmetic_mean() << "\n";
    cout << median() << "\n";

    return 0;
}