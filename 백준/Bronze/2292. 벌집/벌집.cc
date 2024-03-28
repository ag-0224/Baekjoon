#include <iostream>

using namespace std;

int n;
int cnt;
int layer;

int main(void) {
  cin.tie(0)->sync_with_stdio(false);

  cin >> n;

  cnt = 1;
  layer = 1;
  while (n > cnt) {
    cnt += layer * 6;
    layer++;
  }

  cout << layer;
  
  return 0;
}