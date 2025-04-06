#include <iostream>
#include <atcoder/dsu>
using namespace std;
int main(){
  int n, q;
  cin >> n >> q;
  atcoder::dsu d(n);
  while (q--) {
    int t, u, v;
    cin >> t >> u >> v;
    if (t) cout << (d.same(u, v)) << "\n";
    else d.merge(u, v);
  }
}