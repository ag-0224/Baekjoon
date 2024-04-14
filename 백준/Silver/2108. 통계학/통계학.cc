#include <iostream>
#include <vector>
#include <utility>
#include <algorithm>
#include <math.h>

using namespace std;

int n, input;
bool check;
vector <int> v;

bool compare(pair<int, int> a, pair<int, int> b) {
    if (a.second != b.second) {
        return a.second > b.second;
    }
    else {
        return a.first < b.first;
    }
}

int arithmetic_mean() {
    double ans = 0;

    for (int i = 0; i < n; i++) {
        ans += v[i];
    }

    return round(ans / n);
}

int median() {
    return v[(n - 1) / 2];
}

int mode() {
    vector <pair<int, int>> f;

    for (int i = 0; i < n; i++) {
        check = true;
        for (int j = 0; j < f.size(); j++) {
            if (f[j].first == v[i]) {
                f[j].second += 1;
                check = false;
                break;
            }
        }

        if (check) {
            f.push_back({ v[i], 1 });
        }
    }

    sort(f.begin(), f.end(), compare);

    if (f.size() > 1) {
        if (f[0].second == f[1].second) {
            return f[1].first;
        }
        return f[0].first;
    }
    else {
        return f[0].first;
    }
}

int range() {
    return v[n - 1] - v[0];
}

int main() {
    cin.tie(0)->sync_with_stdio(false);

    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> input;
        v.push_back(input);
    }

    sort(v.begin(), v.end());

    cout << arithmetic_mean() << "\n";
    cout << median() << "\n";
    cout << mode() << "\n";
    cout << range() << "\n";

    return 0;
}