#include <iostream>
#include <vector>
#include <utility>
#include <limits.h>
#include <vector>
#include <bit>
template <class S, S (*op)(S, S), S (*e)()>
class SEGMENTTREE {
private:
  int _n, size, log;
  std::vector<S> d;
  void update(int k) {
    d[k] = op(d[2 * k], d[2 * k + 1]);
    return;
  }
public:
  SEGMENTTREE(int n) : SEGMENTTREE(std::vector<S>(n, e())) {}
  SEGMENTTREE(std::vector<S>& v) : _n(int(v.size())){
    size = std::bit_ceil((unsigned int)_n);
    log = std::countr_zero((unsigned int)size);
    d = std::vector<S>(2 * size, e());
    for (int i = 0; i < _n; i++) d[size + i] = v[i];
    for (int i = size - 1; i >= 1; i--) update(i);
  }
  void set(int index, S x) {
    index += size;
    d[index] = x;
    for (int i = 1; i <= log; i++) update(index >> i);
  }
  S get(int index) {
    return d[index + size];
  }
  S prod(int left, int right) {
    S smleft = e(), smright = e();
    left += size, right += size;
    while (left < right) {
      if (left & 1) smleft = op(smleft, d[left++]);
      if (right & 1) smright = op(d[--right], smright);
      left >>= 1, right >>= 1;
    }
    return op(smleft, smright);
  }
  S all_prod() {
    return d[1];
  }
  
  template <class F> int max_right(int l, F f) {
    if (l == _n) return _n;
    l += size;
    S sm = e();
    do {
      while (l % 2 == 0) l >>= 1;
      if (!f(op(sm, d[l]))) {
        while (l < size) {
          l = 2 * l;
          if (f(op(sm, d[l]))) {
            sm = op(sm, d[l]);
            l++;
          }
        }
        return l - size;
      }
      sm = op(sm, d[l]);
      l++;
    } while ((l & -l) != l);
    return _n;
  }
  template <bool (*f)(S)>
  int max_right(int l) {
    return max_right(l, [](S x) {return f(x); });
  }
  
  template <class F>
  int min_left(int r, F f) {
    if (r == 0) return 0;
    r += size;
    S sm = e();
    do {
      r--;
      while (r > 1 && (r % 2)) r >>= 1;
      if (!f(op(d[r], sm))) {
        while (r < size) {
          r = (2 * r + 1);
          if (f(op(d[r], sm))) {
            sm = op(d[r], sm);
            r--;
          }
        }
        return r + 1 - size;
      }
      sm = op(d[r], sm);
    } while ((r & -r) != r);
    return 0;
  }
  template <bool (*f)(S)>
  int min_left(int r) {
    return min_left(r, [](S x) {return f(x); });
  }
};
#ifdef _DEBUG
#define DP(x) cout << #x << " = " << x << endl
#else
#define DP(x) ;
#endif
using namespace std;
pair<int, int> op(pair<int, int> a, pair<int, int> b) {
  return make_pair(min(a.first, b.first), max(a.second, b.second));
}
pair<int, int> e() {
  return make_pair(INT_MAX, 0);
}
signed main() {
  cin.tie(nullptr);
  ios_base::sync_with_stdio(false);
  int n, k;
  cin >> n >> k;
  vector<pair<int, int>> v(n); // hold p's index
  v.reserve(n);
  for (int i = 0; i < n; i++) {
    int p; cin >> p; --p;
    v[p] = make_pair(i, i);
  }
  SEGMENTTREE<pair<int, int>, op, e> seg(v); //hold max and min index for range
  int ans = INT_MAX;
  for (int i = 0; i < n - k + 1; i++) {
    auto tmppair = seg.prod(i, i + k);
    ans = min(ans, tmppair.second - tmppair.first);
  }
  cout << ans << endl;
  return 0;
}