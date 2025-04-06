#ifndef MAIN_INCLUDED
#define MAIN_INCLUDED 1
#include __FILE__
#define DEBUGPLN(x) cout << #x << " = " << x << "\n"
signed main() {
  cin.tie(nullptr);
  ios_base::sync_with_stdio(false);
  int h, w;
  cin >> h >> w;
  vector<string> grid(h);
  pair<int, int> startcordinate = {-1, -1}, endcordinate = {-1, -1};
  for (string &i : grid) cin >> i;
  for (int i = 0; i < h; i++) for (int j = 0; j < w; j++) if (grid[i][j] == 'S') startcordinate = {i, j}; else if (grid[i][j] == 'T') endcordinate = {i, j};
  int n;
  cin >> n;
  map<pair<int, int>, int> potions;
  for (;n--;){
	  int r, c, e;
	  cin >> r >> c >> e;
	  --r, --c;
	  potions[ {r, c} ] = e;
  }
  vector<int> gh = {-1, 0, 1, 0}, gw = {0, 1, 0, -1};
  queue<pair<pair<int, int>, int>> st; //cor, hp
  st.push({startcordinate, 0});
  int debugcnt = 0;
  vector<vector<int>> gridpotion(h, vector<int>(w, -1));
  while (!st.empty()){
	  //DEBUGPLN(debugcnt);
	  debugcnt++;
	  auto tmpcor = st.front();
	  st.pop(); 
  	  //cout << "checking " << tmpcor.first.first << " " << tmpcor.first.second << " " << tmpcor.second << endl;
	  if (potions.contains(tmpcor.first)) if (tmpcor.second < potions[tmpcor.first]) {
		  tmpcor.second = potions[tmpcor.first];
		  potions.erase(tmpcor.first);
	  }
	  if (tmpcor.first.first == endcordinate.first && tmpcor.first.second == endcordinate.second){
		  Yes();
		  return 0;
	  }
	  if (tmpcor.second == 0) continue;
	  if (gridpotion[tmpcor.first.first][tmpcor.first.second] >= tmpcor.second) continue;
	  else gridpotion[tmpcor.first.first][tmpcor.first.second] = tmpcor.second;
	  for (int i = 0; i < gh.size(); i++) if (INRANGE(0, h - 1, tmpcor.first.first + gh[i]) && INRANGE(0, w - 1, tmpcor.first.second + gw[i])) if (grid[tmpcor.first.first + gh[i]][tmpcor.first.second + gw[i]] != '#') {
		  st.push({{(tmpcor.first.first + gh[i]), (tmpcor.first.second + gw[i])}, tmpcor.second - 1});
		  //cout << "adding " << tmpcor.first.first + gh[i] << " " << tmpcor.first.second + gw[i]  << " " << tmpcor.second - 1<< "\n";
	  }
  }
  No();
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
template<class T>
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
typename T::iterator LOWER_BOUND(T& myarray, U target) {
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
