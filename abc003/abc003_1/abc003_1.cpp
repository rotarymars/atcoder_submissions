#ifndef MAIN_INCLUDED
#define MAIN_INCLUDED 1
#include __FILE__
signed main() {
  cin.tie(nullptr);
  ios_base::sync_with_stdio(false);
  int n;
  cin >> n;
  cout << 5000 * (n + 1) << endl;
  return 0;
}
#else

using namespace std;
#define DPln(x) cout << #x << " = " << x << "\n"
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
      if (j == 0)[[unlikely]]
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
template<class T>
istream &operator>>(istream& in, vector<T> &v) {
  for (T& i : v) {
    in >> i;
  }
  return in;
}
template<class T>
ostream &operator<<(ostream& out, vector<T> &v) {
  for (size_t i = 0; i < v.size(); i++) {
    if (i == 0) out << v[i];
    else out << " " << v[i];
  }
  return out;
}
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
