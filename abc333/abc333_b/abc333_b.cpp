#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
#include <numeric>
#include <map>
#include <set>
#include <cmath>

using namespace std;

#define VALL(a) a.begin(), a.end()

namespace {
  using LL = long long;
  using VI = vector<int>;
  using VVI = vector<VI>;
  using VC = vector<char>;
  using VVC = vector<VC>;
  using VS = vector<string>;
  int CO2NUM(const int x, const int y, const int w) {
    return (x * w) + y;
  }

  pair<int, int> NUM2CO(const int n, const int w) {
    return { n / w, n % w };
  }

  template<class T>
  void UNIQUEERASE(T &a) {
    sort(VALL(a));
    a.erase(unique(VALL(a)), a.end());
  }

  template<class T>
  void QUICKUNIQUEERASE(T& a) {
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
  VI STRINGVI(string a) {
    VI ans(a.size());
    for (size_t i = 0; i < a.size(); i++)
    {
      ans.push_back(a[i] - '0');
    }
    return ans;
  }
  string VISTRING(VI a) {
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

  string s, t;
  cin >> s >> t;
  int sfirst, ssecond, tfirst, tsecond;
  VC a = {'A', 'B', 'C', 'D', 'E'};
  for (size_t i = 0; i < 5; i++)
  {
    if (s[0] == a[i])
    {
      sfirst = i;
    }
    if (t[0] == a[i])
    {
      tfirst = i;
    }
    if (t[1] == a[i])
    {
      tsecond = i;
    }
    if (s[1] == a[i])
    {
      ssecond = i;
    }
  }
  int sans, tans;
  sans = abs(sfirst - ssecond);
  tans = abs(tfirst - tsecond);
  if (sans == 3)
  {
    sans -= 1;
  }
  else if (sans == 4)
  {
    sans = 1;
  }
  if (tans == 3)
  {
    tans -= 1;
  }
  else if (tans == 4)
  {
    tans = 1;
  }
  if (sans == tans)
  {
    cout << "Yes\n";
  }
  else
  {
    cout << "No\n";
  }
  return 0;
}