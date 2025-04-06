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
  int n;
  cin >> n;
  VI a(n);
  for (size_t i = 0; i < n; ++i)
  {
    cin >> a[i];
  }
  int cnt = 0;
  for (size_t i = 1; i <= n; ++i)
  {
    for (size_t j = 1; j <= a[i - 1]; ++j)
    {
      string ns = to_string(i);
      string as = to_string(j);
      set<char> b;
      for (size_t k = 0; k < ns.size(); ++k)
      {
        b.insert(ns[k]);
      }
      for (size_t k = 0; k < as.size(); ++k)
      {
        b.insert(as[k]);
        
      }
      if (b.size() == 1) ++cnt;
    }
  }
  cout << cnt << "\n";
  return 0;
}