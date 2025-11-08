#include <iostream>
using namespace std;
signed main() {
  cin.tie(0)->sync_with_stdio(0);
  int h, b;
  cin >> h >> b;
  cout << (h - b > 0 ? h - b : 0) << endl;
  return 0;
}