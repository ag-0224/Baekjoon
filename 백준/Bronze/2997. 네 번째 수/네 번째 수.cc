#include <bits/stdc++.h>

using namespace std;

int arr[3];

int main() {
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

	for (int i = 0; i < 3; i++) cin >> arr[i];

	sort(arr, arr + 3);

	int a = arr[1] - arr[0];
	int b = arr[2] - arr[1];

	if (a == b) cout << arr[2] + a;
	else if (a > b) cout << arr[0] + b;
	else cout << arr[1] + a;

	return 0;
}