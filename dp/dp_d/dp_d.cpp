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
  int n, w;
  cin >> n >> w;
  vector<vector<long long>> dp(n + 1, vector<long long>(w + 1, 0));
  for (size_t i = 0; i < n; i++)
  {
    int V, W;
    cin >> W >> V;
    for (size_t j = 0; j <= w; j++)
    {
      dp[i + 1][j] = max(dp[i][j], dp[i + 1][j]);
      if (j + W <= w)
      {
        dp[i + 1][j + W] = max(dp[i + 1][j + W], dp[i][j] + V);
      }
    }
  }
  //PRINT2D(dp);
  cout << *max_element(VALL(dp[n])) << "\n";
  return 0;
}
