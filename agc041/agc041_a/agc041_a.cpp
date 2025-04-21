#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;

//\///\/ TYPE //\///\/

using ll = long long;
using i128 = __int128_t;
using ld = long double;
using ull = unsigned long long;
using uint = unsigned;
using pl = pair<ll, ll>;
template<class T> using v = vector<T>;
template<class T> using vv = vector<v<T>>;
template<class T> using vvv = vector<vv<T>>;
template<class T> using vvvv = vector<vvv<T>>;
template<class T> using vvvvv = vector<vvvv<T>>;
template<class T> using pq = priority_queue<T>;
template<class T> using pqg = priority_queue<T, vector<T>, greater<T>>;
#define V vector
#define vl v<ll>
#define vp v<pl>
#define vm v<mint>

//\///\/ INOUT //\///\/
 
#define NYAN ios::sync_with_stdio(false);cin.tie(nullptr);cout<<fixed<<setprecision(15);
ostream &operator<<(ostream &os, const i128 &v) {
    if(v == 0) { return (os << "0"); }
    i128 num = v;
    if(v < 0) { os << '-'; num = -num; }
    string s;
    for(; num > 0; num /= 10) { s.push_back((char)(num % 10) + '0'); }
    reverse(s.begin(), s.end());
    return (os << s);
}
void Yes(bool b=1) { cout << ( b == 1 ? "Yes" : "No" ) << "\n"; }
void YES(bool b=1) { cout << ( b == 1 ? "YES" : "NO" ) << "\n"; }
void No(bool b=1) { cout << ( b == 1 ? "No" : "Yes" ) << "\n"; }
void NO(bool b=1) { cout << ( b == 1 ? "NO" : "YES" ) << "\n"; }
void CIN() {}
template <typename T, class... U> void CIN(T &t, U &...u) { cin >> t; CIN(u...); }
void COUT() { cout << "\n"; }
template <typename T, class... U, char sep = ' '> void COUT(const T &t, const U &...u) { cout << t; if (sizeof...(u)) cout << sep; COUT(u...); }
#define dump(x) cerr << #x << ":"<< x << "\n";
#define vdump(x) rep(repeat, sz(x)) cerr << repeat << ":" << x[repeat] << "\n";
 
//\///\/ MACRO //\///\/

// https://trap.jp/post/1224/
#define FOR1(a) for (ll _ = 0; _ < ll(a); ++_)
#define FOR2(i, a) for (ll i = 0; i < ll(a); ++i)
#define FOR3(i, a, b) for (ll i = a; i < ll(b); ++i)
#define FOR4(i, a, b, c) for (ll i = a; i < ll(b); i += (c))
#define FOR1_R(a) for (ll i = (a)-1; i >= ll(0); --i)
#define FOR2_R(i, a) for (ll i = (a)-1; i >= ll(0); --i)
#define FOR3_R(i, a, b) for (ll i = (b)-1; i >= ll(a); --i)
#define overload4(a, b, c, d, e, ...) e
#define overload3(a, b, c, d, ...) d
#define rep(...) overload4(__VA_ARGS__, FOR4, FOR3, FOR2, FOR1)(__VA_ARGS__)
#define repr(...) overload3(__VA_ARGS__, FOR3_R, FOR2_R, FOR1_R)(__VA_ARGS__)
// bitの部分集合の列挙
#define FOR_subset(t, s) for (ll t = (s); t >= 0; t = (t == 0 ? -1 : (t - 1) & (s)))
#define bp __builtin_popcountll
#define ALL(x) x.begin(),x.end()
#define sz(x) (ll)x.size()
template <typename T> T POP(queue<T> &que) { T a = que.front(); que.pop(); return a; }
template <typename T> T POP(deque<T> &que) { T a = que.front(); que.pop_front(); return a; }
template <typename T> T POP(pq<T> &que) { T a = que.top(); que.pop(); return a; }
template <typename T> T POP(pqg<T> &que) { T a = que.top(); que.pop(); return a; }
// R, D, L, U, RU, RD, LD, LU
ll xd[]={0, 1, 0, -1, 1, 1, -1, -1};
ll yd[]={1, 0, -1, 0, 1, -1, -1, 1};

//\///\/ FUNCTION //\///\/

// a / b の床関数（負もOK）
template <typename T> T FLOOR(T a, T b) { return a / b - (a % b && (a ^ b) < 0); }
// a / b の天井関数（負もOK）
template <typename T> T CEIL(T a, T b) { return FLOOR(a + b - 1, b); }
// (divisor - mod) % divisor
// (3, 5) -> (2)
template <typename T> T SUBMOD(T x, T y) { return (y - x % y) % y; }
template <typename T, typename U>
T SUM(const vector<U> &A) {
  T sm = 0;
  for (auto &&a: A) sm += a;
  return sm;
}
#define MIN(v) *min_element(ALL(v))
#define MAX(v) *max_element(ALL(v))
// lower_boundのindexを取得
#define LB(c, x) distance((c).begin(), lower_bound(ALL(c), (x)))
// upper_boundのindexを取得
#define UB(c, x) distance((c).begin(), upper_bound(ALL(c), (x)))
template<class T>bool chmax(T &a, const T &b) { if (a<b) { a=b; return 1; } return 0; }
template<class T>bool chmin(T &a, const T &b) { if (b<a) { a=b; return 1; } return 0; }
// topbit (0, 1, 2, 3, 4) -> (-1, 0, 1, 1, 2)
int tb(ll x) { return (x == 0 ? -1 : 63 - __builtin_clzll(x)); }
// lowbit (0, 1, 2, 3, 4) -> (-1, 0, 1, 0, 2)
int lb(ll x) { return (x == 0 ? -1 : __builtin_ctzll(x)); }
// bitlength (0, 1, 2, 3, 4) -> (0, 1, 2, 2, 3)
int bl(ll x) { return tb(x) + 1; } 
bool OUT(ll x, ll y, ll h, ll w) { return x < 0 || y < 0 || x >= h || y >= w; }
// 「?」 は -1
vl stovl(const string &S, char first_char='0') {
  vl A(S.size());
  rep(i, S.size()) { A[i] = (S[i] != '?' ? S[i] - first_char : -1); }
  return A;
}
// 累積和
template <typename T, typename U>
vector<T> cumsum(vector<U> &A, int off=1) {
  int N = A.size();
  vector<T> B(N + 1);
  rep(i, N) { B[i + 1] = B[i] + A[i]; }
  if (off == 0) B.erase(B.begin());
  return B;
}
// 二分探索
template <typename F>
ll binary_search(F check, ll ok, ll ng) {
  while (abs(ok - ng) > 1) {
    auto x = (ng + ok) / 2;
    (check(x) ? ok : ng) = x;
  }
  return ok;
}
// 二分探索（実数）
template <typename F>
ld binary_search_real(F check, ld ok, ld ng, int iter = 100) {
  rep(iter) {
    double x = (ok + ng) / 2;
    (check(x) ? ok : ng) = x;
  }
  return (ok + ng) / 2;
}

//\///\/ CONSTANT //\///\/

long double PI = 3.14159265358979;
#define INF32 2147483647
#define INF64 9223372036854775807
#define INF 922337203685477580
using mint = modint998244353;
// using mint = modint1000000007;

//\///\///\///\///\///\///\///\///\///\///\///\///\///\///\///\///\///\///\///\/

void solve()
{
  ll n, a, b;
  cin >> n >> a >> b;
  ll d = b - a;
  if(d % 2 == 0){
    cout << d / 2 << "\n";
  }else{
    ll x = a + d / 2;
    ll y = n - b + 1 + d / 2;
    cout << min(x, y) << "\n";
  }
}

int main()
{
  NYAN
  solve();
  return 0;
}
