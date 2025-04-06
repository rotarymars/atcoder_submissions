#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
#include <atcoder/all>

using namespace std;

int main()
{
  cin.tie(nullptr);
  ios_base::sync_with_stdio(false);

  // write code here
  int n, q, t, u, v;
  cin >> n >> q;
  atcoder::dsu a(n);
  for (size_t i = 0; i < q; ++i)
  {
    cin >> t >> u >> v;
    if (t) {
      if (a.same(u, v)) {
        cout << "1\n";
      }
      else cout << "0\n";
    }
    else {
      a.merge(u, v);
    }
  }
  return 0;
}