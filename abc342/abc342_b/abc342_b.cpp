#ifndef MAIN_INCLUDED
#define MAIN_INCLUDED 1
#include __FILE__
signed main() {
  cin.tie(nullptr);
  ios_base::sync_with_stdio(false);
  int n;
  cin >> n;
  VI p(n);
  for (auto& i : p)
  {
    cin >> i;
  }
  int q;
  cin >> q;
  for (size_t i = 0; i < q; i++)
  {
    int a, b;
    cin >> a >> b;
    cout << (distance(p.begin(), find(p.begin(), p.end(), a)) < distance(p.begin(), find(p.begin(), p.end(), b)) ? a : b) << "\n";
  }
  return 0;
}
#else

using namespace std;
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
  using VPII = vector<PII>;
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
  if (a == 1)
  {
    return false;
  }
  for (T i = 2; i * i < a; i++)
  {
    if (a % i == 0)
    {
      return false;
    }
  }
  return true;
}
template <class T, class U>
bool QUICKFIND(T& a, U target) {
  auto it = lower_bound(VALL(a), target);
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
template <class T>
void SORT(T& myarray) {
  sort(myarray.begin(), myarray.end());
}

template<class T, class U>
T::iterator LOWER_BOUND(T& myarray, U target) {
  return lower_bound(myarray.begin(), myarray.end(), target);
}
template <class T>
void UNIQUEERASE(T& a) {
  sort(a.begin(), a.end());
  a.erase(unique(a.begin()), a.end());
}
template <class T>
void QUICKUNIQUEERASE(T& a) {
  a.erase(unique(a.begin(), a.end()), a.end());
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
