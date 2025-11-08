#include <iostream>
#include <set>
#include <vector>
using namespace std;
signed main() {
  cin.tie(0)->sync_with_stdio(0);
  int x, n;
  cin >> x >> n;
  vector<int> w(n);
  for (auto &i : w) {
    cin >> i;
  }
  int q;
  cin >> q;
  set<int> contains;
  int weight = x;
  for (; q--;) {
    int p;
    cin >> p;
    --p;
    if (contains.contains(p)) {
      contains.erase(p);
      cout << (x -= w[p]) << '\n';
    } else {
      contains.insert(p);
      cout << (x += w[p]) << '\n';
    }
  }
  return 0;
}