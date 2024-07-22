#include <bits/stdc++.h>

using namespace std;

int t, n, m; 
int input;

int binarySearch(vector<int>& v, int target) {
	int start = 0;
	int end = v.size() - 1;

	int mid;

	while (start <= end) {
		mid = (start + end) / 2;

		if (v[mid] == target) {
			return 1;
		}
		else if (v[mid] < target) {
			start = mid + 1;
		}
		else if (v[mid] > target) {
			end = mid - 1;
		}
	}

	return 0;
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	cin >> t;

	while (t--) {
		cin >> n;

		vector<int> v;

		int temp;
		for (int i = 0; i < n; i++) {
			cin >> temp;
			v.push_back(temp);
		}

		cin >> m;

		sort(v.begin(), v.end());

		for (int i = 0; i < m; i++) {
			cin >> input;
			cout << binarySearch(v, input) << "\n";
		}
	}

	return 0;
}