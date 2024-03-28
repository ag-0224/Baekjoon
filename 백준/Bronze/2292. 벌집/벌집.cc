#include <iostream>

using namespace std;

int n;
int a, b;
int result;

int main(void) {
  cin.tie(0)->sync_with_stdio(false);

  cin >> n;

  a = b = 1;
  result = 1;
  for (int i = 1; i < n; i++) {
    if (n == 1) {
      break;
    }

    a = b;
    b += 6 * i;
    if (a < n && n <= b) {
      result = i + 1;
      break;
    }
  }

  cout << result;

  return 0;
}