#include <iostream>
#include <set>
#include <vector>
using namespace std;
signed main() {
  cin.tie(nullptr);
  ios::sync_with_stdio(false);
  int n, m;
  cin >> n >> m;
  vector<int> a(n), b(m);
  for (int i = 0; i < n; ++i) {
    cin >> a[i];
  }
  for (int i = 0; i < m; ++i) {
    cin >> b[i];
  }
  multiset<int> se(a.begin(), a.end());
  for (int i = 0; i < m; ++i) {
    auto it = se.find(b[i]);
    if (it != se.end()) {
      se.erase(it);
    }
  }
  vector<int> result(se.begin(), se.end());
  for (int i = 0; i < result.size(); ++i) {
    cout << result[i] << (i == result.size() - 1 ? '\n' : ' ');
  }
  return 0;
}