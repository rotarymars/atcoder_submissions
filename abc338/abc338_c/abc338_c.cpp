#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <set>
#include <map>
#include <queue>
#include <stack>
#include <cmath>
#include <iomanip>
#include <regex>
#include <numeric>
#include <atcoder/all>
#define VALL(a) a.begin(), a.end()
#ifndef INT_MAX
#define INT_MAX 2147483647
#endif INT_MAX
#ifndef INT_MIN
#define INT_MIN -2147483648
#endif INT_MIN
#ifndef UINT_MAX
#define UINT_MAX 4294967295
#endif UINT_MAX
#ifndef LL_MAX
#define LL_MAX 9223372036854775807
#endif LL_MAX
#ifndef LL_MIN
#define LL_MIN -9223372036854775808
#endif LL_MIN
#ifndef ULL_MAX
#define ULL_MAX 18446744073709551615
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
  using PII = pair<int, int>;
  using VPII = vector<PII>;
  using SI = set<int>;
  using SC = set<char>;

  int COTONUM(const int x, const int y, const int w) {
    return (x * w) + y;
  }

  PII NUMTOCO(const int n, const int w) {
    return { n / w, n % w };
  }
  
  void VSTOVVC(VS &a, VVC &b) {
    for (size_t i = 0; i < a.size(); i++)
    {
      for (size_t j = 0; j < a[i].size(); j++)
      {
        b[i][j] = a[i][j];
      }
    }
  }

  void STOVC(string &a, VC &b) {
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
    return (a * b / (GCD(a, b)));
  }

  template<class T>
  bool ISPRIME(T &a) {
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

  template<class T, class U>
  bool QUICKFIND(T &a, U target) {
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

  template<class T>
  bool INRANGE(T l, T r, T sample) {
    if (sample >= l && sample <= r)
    {
      return true;
    }
    else
    {
      return false;
    }
  }

  template<class T>
  void SORT(T &myarray) {
    sort(VALL(myarray));
  }

  template<class T>
  void UNIQUEERASE(T &a) {
    sort(VALL(a));
    a.erase(unique(VALL(a)), a.end());
  }

  template<class T>
  void QUICKUNIQUEERASE(T &a) {
    a.erase(unique(VALL(a)), a.end());
  }

  template <class T>
  void PRINT1D(T a) {
    cout << "***VECTOR 1D PRINT STARTED***\n";
    cout << "{";
    for (size_t i = 0; i < a.size(); i++)
    {
      cout << a[i] << ", ";
    }
    cout << "}\n";
    cout << "***VECTOR 1D ENDED***\n";
  }

  template <class T>
  void PRINT2D(T a) {
    cout << "***VECTOR 2D STARTED***\n";
    cout << "{";
    for (size_t i = 0; i < a.size(); i++)
    {
      cout << "\n{";
      for (size_t j = 0; j < a[i].size(); j++)
      {
        cout << a[i][j] << ", ";
      }
      cout << "}, ";
    }
    cout << "\n}\n";
    cout << "***VECTOR 2D ENDED***\n";
  }

  namespace CAL {
    VI zero() {
      return { 0 };
    }
    VI one() {
      return { 1 };
    }
    VI two() {
      return { 2 };
    }
    VI three() {
      return { 3 };
    }
    VI four() {
      return { 4 };
    }
    VI five() {
      return { 5 };
    }
    VI six() {
      return { 6 };
    }
    VI seven() {
      return { 7 };
    }
    VI eight() {
      return { 8 };
    }
    VI nine() {
      return { 9 };
    }
    VI ten() {
      return { 10 };
    }
  }
  VI STRINGVI(string &a) {
    VI ans(a.size());
    for (size_t i = 0; i < a.size(); i++)
    {
      ans.push_back(a[i] - '0');
    }
    return ans;
  }
  string VISTRING(VI &a) {
    string ans;
    for (size_t i = 0; i < a.size(); i++)
    {
      ans = ans + to_string(a[i]);
    }
    return ans;
  }
  VI REMOVEZERO(VI a) {
    bool flag = true;
    while (flag) {
      if (!(a.size() <= 1)) {
        if (*a.begin() == 0) {
          a.erase(a.begin());
        }
        else {
          break;
        }
      }
      else {
        break;
      }
    }
    return a;
  }
  VI ADDITION(VI a, VI b) {
    size_t a_size = a.size(), b_size = b.size(), up = 0, am, bm;
    VI ans;
    for (size_t i = 1; i <= max((int)a_size, (int)b_size) + 1; i++)
    {
      if (i <= a_size) {
        am = a[a_size - i];
      }
      else {
        am = 0;
      }
      if (i <= b_size) {
        bm = b[b_size - i];
      }
      else {
        bm = 0;
      }
      ans.insert(ans.begin(), (am + bm + up) % 10);
      up = (am + bm + up) / 10;
    }
    ans = REMOVEZERO(ans);
    return ans;
  }
  VI SUBTRACTION(VI a, VI b) {
    size_t a_size = a.size(), b_size = b.size();
    int am, bm, nextdown = 0;
    VI ans;
    for (size_t i = 1; i <= max((int)a_size, (int)b_size); i++)
    {
      if (i <= a_size) {
        am = a[a_size - i];
      }
      else {
        am = 0;
      }
      if (i <= b_size) {
        bm = b[b_size - i];
      }
      else {
        bm = 0;
      }
      if (am - bm + nextdown >= 0) {
        ans.insert(ans.begin(), am - bm + nextdown);
        nextdown = 0;
      }
      else {
        am += 10;
        ans.insert(ans.begin(), am - bm + nextdown);
        nextdown = -1;
      }
    }
    return REMOVEZERO(ans);
  }
  VI MULTIPLICATION(VI a, VI b) {
    size_t a_size = a.size(), b_size = b.size(), am, bm;
    VI ans = { 0 }, line = {};
    for (size_t i = 1; i <= b_size; i++)
    {
      line = {};
      bm = b[b_size - i];
      for (size_t j = 0; j < i - 1; j++)
      {
        line.insert(line.begin(), 0);
      }
      for (size_t j = 1; j <= a_size; j++)
      {
        am = a[a_size - j];
        line.insert(line.begin(), am * bm);
      }
      line.insert(line.begin(), 0);
      size_t line_size = line.size();
      for (size_t j = 1; j <= line_size; j++)
      {
        if (line[line_size - j] >= 10) {
          line[line_size - j - 1] += (line[line_size - j] / 10);
          line[line_size - j] = line[line_size - j] % 10;
        }
      }
      ans = ADDITION(ans, line);
    }
    return REMOVEZERO(ans);
  }
}

int main()
{
  cin.tie(nullptr);
  ios_base::sync_with_stdio(false);
  int n;
  cin >> n;
  VI q(n);
  for (auto& i : q)
  {
    cin >> i;
  }
  VI a(n);
  for (auto& i : a)
  {
    cin >> i;
  }
  VI b(n);
  for (auto& i : b)
  {
    cin >> i;
  }
  bool ok = true;
  int ans = 0, minadiv = INT_MAX, minbdiv = INT_MAX;
  for (size_t i = 0; i < n; i++)
  {
    if (a[i] != 0)
    {
      minadiv = min(q[i] / a[i], minadiv);
    }
    if (b[i] != 0)
    {
      minbdiv = min(q[i] / b[i], minbdiv);
    }
  }
  for (size_t i = 0; i <= minadiv; i++)
  {
    VI remaindings(n);
    for (size_t j = 0; j < n; j++)
    {
      remaindings[j] = q[j] - a[j] * i;
    }
    int maybeans = INT_MAX;
    for (size_t j = 0; j < n; j++)
    {
      if (b[j] != 0)
      {
        maybeans = min(maybeans, remaindings[j] / b[j]);
      }
    }
    ans = max(ans, maybeans + (int)i);
  }
  for (size_t i = 0; i <= minbdiv; i++)
  {
    VI remaindings(n);
    for (size_t j = 0; j < n; j++)
    {
      remaindings[j] = q[j] - b[j] * i;
    }
    int maybeans = INT_MAX;
    for (size_t j = 0; j < n; j++)
    {
      if (a[j] != 0)
      {
        maybeans = min(maybeans, remaindings[j] / a[j]);
      }
    }
    ans = max(ans, maybeans + (int)i);
  }
  cout << ans << "\n";
  return 0;
}