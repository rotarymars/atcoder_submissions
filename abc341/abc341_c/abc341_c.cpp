#ifndef MAIN_INCLUDED
#define MAIN_INCLUDED 1
#include __FILE__
int main() {
  cin.tie(nullptr);
  ios_base::sync_with_stdio(false);
  int h, w, n;
  string t;
  cin >> h >> w >> n >> t;
  VS grid(h);
  for (auto& i : grid)
  {
    cin >> i;
  }
  int ans = 0;
  for (size_t i = 0; i < h; i++)
  {
    for (size_t j = 0; j < w; j++)
    {
      bool ok = true;
      if (grid[i][j] == '.')
      {
        int nowh = i, noww = j;
        for (size_t k = 0; k < n; k++)
        {
          if (t[k] == 'L')
          {
            --noww;
          }
          else if (t[k] == 'R')
          {
            ++noww;
          }
          else if (t[k] == 'U')
          {
            --nowh;
          }
          else
          {
            ++nowh;
          }
          if ((grid[nowh][noww] != '.') || (!INRANGE(0, h - 1, nowh)) || (!INRANGE(0, w - 1, noww)))
          {
            ok = false;
            /*
            if ((grid[nowh][noww] != '.'))
            {
              cout << i << " " << j << "grid not dot\n" << k << endl;
            }
            else if (!INRANGE(0, h - 1, nowh))
            {
              cout << i << " " << j << "h not in range\n";
            }
            else
            {
              cout << i << " " << j << "w not in range\n";
            }*/
            //cout << i << " " << j << " " <<  k << No << endl;
            break;
          }
        }
      }
      else
      {
        ok = false;
        //cout << i << " " << j << NO << endl;
      }
      if (ok)
      {
        ++ans;
        //cout << i << " " << j << Yes << endl;
      }
    }
  }
  cout << ans << "\n";
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
#define VALL(a) a.begin(), a.end()
#define Yes "Yes\n"
#define No "No\n"
#define YES "YES\n"
#define NO "NO\n"
#define yes "yes\n"
#define no "no\n"
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
  sort(VALL(myarray));
}

template<class T, class U>
auto LOWER_BOUND(T& myarray, U target) {
  return lower_bound(VALL(myarray), target);
}
template <class T>
void UNIQUEERASE(T& a) {
  sort(VALL(a));
  a.erase(unique(VALL(a)), a.end());
}
template <class T>
void QUICKUNIQUEERASE(T& a) {
  a.erase(unique(VALL(a), a.end()));
}
template <class T>
void PRINT1D(T a) {
  cout << "\n";
  for (size_t i = 0; i < a.size(); i++)
  {
    if (i == 0)
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
      if (j == 0)
      {
        cout << a[j];
      }
      else
      {
        cout << " " << a[j];
      }
    }
    cout << "\n";
  }
}
#endif
