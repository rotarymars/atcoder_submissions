#include <iostream>
#include <vector>
#include <algorithm>
#include <cassert>
#include <set>
#include <unordered_map>
using namespace std;

signed main() {
  cin.tie(nullptr);
  ios::sync_with_stdio(false);
  
  int n, m;
  cin >> n >> m;
  
  vector<set<int>> v(m);
  for (int i = 0; i < m; i++) {
    int k;
    cin >> k;
    for (int j = 0; j < k; j++) {
      int x;
      cin >> x;
      v[i].insert(x);
    }
  }
  
  vector<int> b(n);
  unordered_map<int, int> last_pos;
  for (int i = 0; i < n; i++) {
    cin >> b[i];
    last_pos[b[i]] = i;
  }
  vector<int> when(m, -1);
  for (int i = 0; i < m; i++) {
    for (int x : v[i]) {
      if (last_pos.contains(x)) {
        when[i] = max(when[i], last_pos[x]);
      }
    }
  }
  sort(when.begin(), when.end());
  vector<int> ans(n);
  int count = 0;
  for (int i = 0, j = 0; i < n; i++) {
    while (j < m && when[j] <= i) {
      count++;
      j++;
    }
    ans[i] = count;
  }
  for (int x : ans) {
    cout << x << '\n';
  }
  
  return 0;
}
