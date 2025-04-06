#ifndef MAIN_INCLUDED
#define MAIN_INCLUDED 1
#include __FILE__
long long f(long long a, long long b) { return a + b; }
long long e() { return 0; }
signed main() {
  cin.tie(nullptr);
  ios_base::sync_with_stdio(false);
  int n, q;
  cin >> n >> q;
  vector<long long> a(n, e());
  cin >> a;
  SEGTREE<long long, f, e> se(a);
  for (; q; q--) {
    int tmp, temp, tempp;
    cin >> tmp >> temp >> tempp;
    if (tmp) cout << se.prod(temp, tempp) << endl;
    else se.set(temp, se.get(temp) + tempp);
  }
  return 0;
}
#else

using namespace std;
#ifdef _DEBUG
#define DPln(x) cout << #x << " = " << x << "\n"
#else
#define DPln(x) ;
#endif
#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <set>
#include <map>
#include <queue>
#include <stack>
#include <cmath>
#include <limits.h>
#include <iomanip>
#include <regex>
#include <numeric>
#include <bit>
#include <cassert>
#if __has_include(<atcoder/all>)
#include <atcoder/all>
#endif
#ifndef LL_MAX
#define LL_MAX LLONG_MAX
#endif LL_MAX
#ifndef LL_MIN
#define LL_MIN LLONG_MIN
#endif LL_MIN
#ifndef ULL_MAX
#define ULL_MAX ULLONG_MAX
#endif ULL_MAX
namespace {
  using namespace std;
  using UINT = unsigned int;
  using LL = long long;
  using ULL = unsigned long long;
  using VI = vector<int>;
  using VVI = vector<VI>;
  using VC = vector<char>;
  using VVC = vector<VC>;
  using VS = vector<string>;
  using VLL = vector<LL>;
  using VVLL = vector<VLL>;
  using VB = vector<bool>;
  using VVB = vector<VB>;
  using PII = pair<int, int>;
  using PLLLL = pair<LL, LL>;
  using VPII = vector<PII>;
  using VPLLLL = vector<PLLLL>;
  using SI = set<int>;
  using SC = set<char>;
  using MII = map<int, int>;
  using MLLLL = map<LL, LL>;
  using STI = stack<int>;
  using STLL = stack<LL>;
  using QI = queue<int>;
  using QLL = queue<LL>;
}
template<class T>
istream& operator>>(istream& in, vector<T>& v) {
  for (T& i : v) {
    in >> i;
  }
  return in;
}
template<class T>
ostream& operator<<(ostream& out, vector<T>& v) {
  for (size_t i = 0; i < v.size(); i++) {
    if (i == 0) out << v[i];
    else out << " " << v[i];
  }
  return out;
}
template<class T, class U>
istream& operator>>(istream& in, pair<T, U>& p) {
  in >> p.first >> p.second;
  return in;
}
template<class T, class U>
ostream& operator<<(ostream& out, pair<T, U>& p) {
  out << p.first << " " << p.second;
  return out;
}
template<class T, class U>
ostream& operator<<(ostream& out, vector<pair<T, U>>& p) {
  for (auto& [__FIRST, __SECOND] : p) {
    out << __FIRST << " " << __SECOND << "\n";
  }
  return out;
}
void Yes() {
  cout << "Yes\n";
}
void No() {
  cout << "No\n";
}
void yes() {
  cout << "yes\n";
}
void no() {
  cout << "no\n";
}
void YES() {
  cout << "YES\n";
}
void NO() {
  cout << "NO\n";
}
template<class T = int>
T I() {
  T tmp;
  cin >> tmp;
  return tmp;
}
template<class T>
T RUD(T a, T b) {
  return ((a + b - (T)1) / b);
}
int COTONUM(const int x, const int y, const int w) {
  return (x * w) + y;
}
PII NUMTOCO(const int n, const int w) {
  return { n / w, n % w };
}
void VSTOVCC(VS& a, VVC& b) {
  for (size_t i = 0; i < a.size(); i++)
  {
    for (size_t j = 0; j < a[i].size(); j++)
    {
      b[i][j] = a[i][j];
    }
  }
}
void STOVC(string& a, VC& b) {
  for (size_t i = 0; i < a.size(); i++)
  {
    b[i] = a[i];
  }
}

template<class T>
T GCD(T a, T b) {
  while (a && b)
  {
    if (a >= b)
    {
      a %= b;
    }
    else
    {
      b %= a;
    }
  }
  return max(a, b);
}
template<class T>
T LCM(T a, T b) {
  return a / GCD(a, b) * b;
}
template<class T>
bool ISPRIME(const T a) {
  if (a <= 1)
  {
    return false;
  }
  for (T i = 2; i * i <= a; i++)
  {
    if (a % i == 0)
    {
      return false;
    }
  }
  return true;
}
template <class T>
void SORT(T& myarray) {
  sort(myarray.begin(), myarray.end());
}
template<class T>
vector<T> ENUM_DIVISORS(T n) {
  vector<T> result;
  for (T i = 1; i * i <= n; i++)
  {
    if (n % i == 0)
    {
      result.push_back(i);
      if (n / i != i)
      {
        result.push_back(n / i);
      }
    }
  }
  SORT(result);
  return result;
}
template <class T>
vector<pair<T, T>> PRIME_FACTORIZE(T n) {
  vector<pair<T, T>> result;
  for (T i = 2; i * i <= n; i++)
  {
    if (n % i != 0)
    {
      continue;
    }
    T ex = 0;
    while (n % i == 0)
    {
      ++ex;
      n /= i;
    }
    result.push_back({ i, ex });
  }
  if (n != 1)
  {
    result.push_back({ n, 1 });
  }
  SORT(result);
  return result;
}
template <class T, class U>
bool QUICKFIND(T& a, U target) {
  auto it = lower_bound(a.begin(), a.end(), target);
  if (it == a.end())
  {
    return false;
  }
  if (*it == target)
  {
    return true;
  }
  else
  {
    return false;
  }
}
template <class T>
bool INRANGE(T l, T r, T sample) {
  return (sample >= l && sample <= r);
}


template<class T, class U>
T::iterator LOWER_BOUND(T& myarray, U target) {
  return lower_bound(myarray.begin(), myarray.end(), target);
}
template <class T>
void UNIQUEERASE(T& a) {
  sort(a.begin(), a.end());
  a.erase(unique(a.begin(), a.end()), a.end());
}
template <class T>
void QUICKUNIQUEERASE(T& a) {
  a.erase(unique(a.begin(), a.end()), a.end());
}
template <class T>
T POWMOD(T a, T b, T c) {
  T ans = 1;
  a %= c;
  while (b != 0)
  {
    if (b & 1)
    {
      ans *= a;
    }
    a *= a;
    b >>= 1;
    a %= c;
    ans %= c;
  }
  return ans;
}
bool ISPALINDROME(string s) {
  for (size_t i = 0; i < s.size() / 2; i++)
  {
    if (s[i] == s[s.size() - 1 - i])
    {
      continue;
    }
    return false;
  }
  return true;
}
bool ISUPPER(char a) {
  if (a >= 'A' && a <= 'Z')
  {
    return true;
  }
  return false;
}
bool ISLOWER(char a) {
  if (a >= 'a' && a <= 'z')
  {
    return true;
  }
  return false;
}
char TOUPPER(char a) {
  return (char)(a - 32);
}
char TOLOWER(char a) {
  return (char)(a + 32);
}
template <class T>
void PRINT1D(T a) {
  cout << "\n";
  for (size_t i = 0; i < a.size(); i++)
  {
    if (i == 0) [[unlikely]]
      {
        cout << a[i];
      }
    else
    {
      cout << " " << a[i];
    }
  }
  cout << "\n";
}
template <class T>
void PRINT2D(T a) {
  cout << "\n";
  for (size_t i = 0; i < a.size(); i++)
  {
    for (size_t j = 0; j < a[i].size(); j++)
    {
      cout << a[i][j];
    }
    cout << "\n";
  }
}

template <class T>
void PRINT2DSP(T a) {
  cout << "\n";
  for (size_t i = 0; i < a.size(); i++)
  {
    for (size_t j = 0; j < a[i].size(); j++)
    {
      if (j == 0) [[unlikely]]
        {
          cout << a[i][j];
        }
      else
      {
        cout << " " << a[i][j];
      }
    }
    cout << "\n";
  }
}
class DSU {
private:
  vector<int> parent;
public:
  DSU(int n) : parent(n) { iota(parent.begin(), parent.end(), 0); };
  int leader(int a) {
    vector<int> to_change;
    int tmp = parent[a];
    while (tmp != parent[tmp]) {
      to_change.push_back(tmp);
      tmp = parent[tmp];
    }
    for (int& i : to_change) parent[i] = tmp;
    return tmp;
  }
  int merge(int a, int b) {
    parent[DSU::leader(a)] = parent[DSU::leader(b)] = DSU::leader(a);
    return DSU::leader(a);
  }
  void _LINK_LEADER() {
    for (int i = 0; i < parent.size(); i++) parent[i] = DSU::leader(i);
  }
  vector<vector<int>> to_vector() {
    map<int, int> m;
    for (int i = 0; i < parent.size(); i++) m[DSU::leader(i)] = i;
    for (auto i = m.begin(); i != m.end(); i++) i->second = distance(m.begin(), i);
    vector<vector<int>> ret(m.size());
    for (int i = 0; i < parent.size(); i++) {
      ret[m[DSU::leader(i)]].push_back(i);
    }
    return ret;
  }
  vector<int> parentcopy() {
    return parent;
  }
};
template <class S, S(*op)(S, S), S(*e)()>
class SEGTREE {
public:
  SEGTREE() : SEGTREE(0) {}
  explicit SEGTREE(int n) : SEGTREE(vector<S>(n, e())) {}
  explicit SEGTREE(const vector<S>& v) : _n(int(v.size())) {
    size = (int)bit_ceil((unsigned int)(_n));
    log = countr_zero((unsigned int)size);
    d = std::vector<S>(2 * size, e());
    for (int i = 0; i < _n; i++) d[size + i] = v[i];
    for (int i = size - 1; i >= 1; i--) {
      update(i);
    }
  }

  void set(int p, S x) {
    assert(0 <= p && p < _n);
    p += size;
    d[p] = x;
    for (int i = 1; i <= log; i++) update(p >> i);
  }

  S get(int p) const {
    assert(0 <= p && p < _n);
    return d[p + size];
  }

  S prod(int l, int r) const {
    assert(0 <= l && l <= r && r <= _n);
    S sml = e(), smr = e();
    l += size;
    r += size;

    while (l < r) {
      if (l & 1) sml = op(sml, d[l++]);
      if (r & 1) smr = op(d[--r], smr);
      l >>= 1;
      r >>= 1;
    }
    return op(sml, smr);
  }

  S all_prod() const { return d[1]; }

  template <bool (*f)(S)> int max_right(int l) const {
    return max_right(l, [](S x) { return f(x); });
  }
  template <class F> int max_right(int l, F f) const {
    assert(0 <= l && l <= _n);
    assert(f(e()));
    if (l == _n) return _n;
    l += size;
    S sm = e();
    do {
      while (l % 2 == 0) l >>= 1;
      if (!f(op(sm, d[l]))) {
        while (l < size) {
          l = (2 * l);
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

  template <bool (*f)(S)> int min_left(int r) const {
    return min_left(r, [](S x) { return f(x); });
  }
  template <class F> int min_left(int r, F f) const {
    assert(0 <= r && r <= _n);
    assert(f(e()));
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

private:
  int _n, size, log;
  vector<S> d;

  void update(int k) { d[k] = op(d[2 * k], d[2 * k + 1]); }
};
#endif
/*
                   _ooOoo_
                  o8888888o
                  88" . "88
                  (| -_- |)
                  O\  =  /O
               ____/`---'\____
             .'  \\|     |//  `.
            /  \\|||  :  |||//  \
           /  _||||| -:- |||||-  \
           |   | \\\  -  /// |   |
           | \_|  ''\---/''  |   |
           \  .-\__  `-`  ___/-. /
         ___`. .'  /--.--\  `. . __
      ."" '<  `.___\_<|>_/___.'  >'"".
     | | :  `- \`.;`\ _ /`;.`/ - ` : | |
     \  \ `-.   \_ __\ /__ _/   .-` /  /
======`-.____`-.___\_____/___.-`____.-'======
                   `=---='
^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^
        Let's get AC!    Pass System Test!
*/
/*        .
         .8.              ,o888888o.
        .888.           ,888      `88.
       .88888.        ,8888         `8.
      .  88888.       88888
     .8   88888.      8888
    .8`8   88888.     8888
   .8' `8   88888.    8888
  .8'   `8   88888.   `8888         .8'
 .888888888   88888.     888      ,88'
.8'       `8   88888.     `88888888'
*/
/*
888888888888             888           8888888888888888888           8888           888888888888     888             888   888888             888888           8888           888888888888     .88888888888
888       888          888 888                 888                  88  88          888       888      888         888     888 888           888 888          88  88          888       888    88
888        888       888     888               888                 88    88         888        888       888     888       888  888         888  888         88    88         888        888   88
888       888      888         888             888                88      88        888       888          888 888         888   888       888   888        88      88        888       888    88
888888888888     888             888           888               88        88       888888888888             888           888    888     888    888       88        88       888888888888     '8888888888.
888 888            888         888             888              88888888888888      888 888                  888           888     888   888     888      88888888888888      888 888                    88
888   888            888     888               888             88            88     888   888                888           888      888 888      888     88            88     888   888                  88
888     888            888 888                 888            88              88    888     888              888           888       88888       888    88              88    888     888                88
888       888            888                   888           88                88   888       888            888           888        888        888   88                88   888       888    88888888888'
*/
