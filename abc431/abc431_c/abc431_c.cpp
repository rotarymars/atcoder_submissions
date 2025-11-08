#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;
signed main() {
  cin.tie(0)->sync_with_stdio(0);
  int n, m, k;
  cin >> n >> m >> k;
  vector<long long> h(n), b(m);
  for (auto &i : h) {
    cin >> i;
  }
  for (auto &i : b) {
    cin >> i;
  }
  sort(h.begin(), h.end());
  sort(b.begin(), b.end());
  vector<long long>::iterator previt = b.begin(), currentit = h.begin();
  bool isfirst = true;
  while (previt != b.end() && currentit != h.end()) {
    auto it = lower_bound((isfirst ? b.begin() : previt), b.end(), *currentit);
    // cout<<"Chosen: "<<distance(h.begin(),currentit)<<",
    // "<<distance(b.begin(),it)<<endl;
    if (it == b.end()) {
      break;
    }
    isfirst = false;
    previt = it + 1;
    ++currentit;
  }
  cout << (distance(h.begin(), currentit) >= k ? "Yes" : "No") << endl;
  // cout<<distance(h.begin(),currentit)<<endl;
  return 0;
}