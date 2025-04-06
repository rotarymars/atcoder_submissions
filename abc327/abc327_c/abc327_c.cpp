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

using ll = long long;
using VI = std::vector<int>;
using VVI = std::vector<VI>;
using VC = std::vector<char>;
using VVC = std::vector<VC>;

int pt2n(const int x, const int y, const int w) { return (x * w) + y; }

std::pair<int, int> num2pt(const int n, const int w) { return std::make_pair(n / w, n % w); }

template <typename T>
void PRINT1D(T a) {
  cout << "******VECTOR 1D PRINT STARTED******\n";
  cout << '{';
  for (size_t i = 0; i < a.size(); ++i)
  {
    cout << a[i] << ", ";
  }
  cout << "}\n";
  cout << "******VECTOR 1D PRINT ENDED******\n";
}

template <typename U>
void PRINT2D(U a) {
  cout << "******VECTOR 2D PRINT STARTED******\n";
  cout << "{";
  for (size_t i = 0; i < a.size(); ++i)
  {
    cout << "\n{";
    for (size_t k = 0; k < a[i].size(); ++k)
    {
      cout << a[i][k] << ", ";
    }
    cout << "}, ";
  }
  cout << "\n}\n";
  cout << "******VECTOR 2D PRINT ENDED******\n";
}

int main()
{
  cin.tie(nullptr);
  ios_base::sync_with_stdio(false);

  // write code here
  VVI a(9, VI(9));
  for (size_t i = 0; i < 9; ++i)
  {
    for (size_t j = 0; j < 9; ++j)
    {
      cin >> a[i][j];
    }
  }
  set<int> checker;
  for (size_t i = 0; i < 9; ++i)
  {
    checker.clear();
    for (size_t j = 0; j < 9; ++j)
    {
      checker.insert(a[i][j]);
    }
    if (checker.size() != 9) {
      cout << "No\n";
      return 0;
    }
  }
  for (size_t i = 0; i < 9; ++i)
  {
    checker.clear();
    for (size_t j = 0; j < 9; ++j)
    {
      checker.insert(a[j][i]);
    }
    if (checker.size() != 9) {
      cout << "No\n";
      return 0;
    }
  }
  VI uprighti = { 0, 0, 0, 3, 3, 3, 6, 6, 6 };
  VI uprightj = { 0, 3, 6, 0, 3, 6, 0, 3, 6 };
  VI checkeri = { 0, 0, 0, 1, 1, 1, 2, 2, 2 };
  VI checkerj = { 0, 1, 2, 0, 1, 2, 0, 1, 2 };
  for (size_t i = 0; i < 9; ++i)
  {
    for (size_t j = 0; j < 9; ++j)
    {
      checker.clear();
      for (size_t k = 0; k < 9; ++k)
      {
        for (size_t l= 0; l < 9; ++l)
        {
          checker.insert(a[uprighti[i] + checkeri[k]][uprightj[j] + checkerj[l]]);
        }
      }
      if (checker.size() != 9) {
        cout << "No\n";
        return 0;
      }
    }
  }
  cout << "Yes\n";
  return 0;
}
