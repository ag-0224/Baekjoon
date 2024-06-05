#include <iostream>

using namespace std;

int n;

int fibo(int n) {
	if (n == 0) return 0;
	else if (n == 1) return 1;
	else return fibo(n - 1) + fibo(n - 2);
}

int main(void) {
	cin.tie(0)->sync_with_stdio(false);

	cin >> n;

	cout << fibo(n);

	return 0;   
}