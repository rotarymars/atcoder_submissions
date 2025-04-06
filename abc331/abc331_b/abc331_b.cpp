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

using LL = long long;
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
  int n, s, m, l;
  cin >> n >> s >> m >> l;
  int ans = 1e9;
  for (size_t i = 0; i <= n / 6 + 1; i++)
  {
    for (size_t j = 0; j <= n / 8 + 1; j++)
    {
      for (size_t k = 0; k <= n / 12 + 1; k++)
      {
        if (n <= i * 6 + j * 8 + k * 12) {
          ans = min((int)i * s + (int)j * m + (int)k * l, ans);
        }
      }
    }
  }
  cout << ans << endl;
  return 0;
}