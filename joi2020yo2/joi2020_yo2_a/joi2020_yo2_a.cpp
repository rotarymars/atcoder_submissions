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
  VVC first_poster(n, VC(n));
  VVC ans_poster(n, VC(n));
  for (size_t i = 0; i < n; ++i)
  {
    string memory;
    cin >> memory;
    for (size_t j = 0; j < n; ++j)
    {
      first_poster[i][j] = memory[j];
    }
  }
  for (size_t i = 0; i < n; ++i)
  {
    string memory;
    cin >> memory;
    for (size_t j = 0; j < n; ++j)
    {
      ans_poster[i][j] = memory[j];
    }
  }
  VVC one_clockwize_poster(n, VC(n));
  VVC two_clockwize_poster(n, VC(n));
  VVC one_anticlockwize_poster(n, VC(n));
  for (int i = 1; i <= n; ++i) {
    for (int j = 1; j <= n; ++j) {
      one_clockwize_poster[(j)-1][(n - i + 1) - 1] = first_poster[(i)-1][(j)-1];
      two_clockwize_poster[(n - i + 1) - 1][(n - j + 1) - 1] = first_poster[(i)-1][(j)-1];
      one_anticlockwize_poster[(n - j + 1) - 1][(i)-1] = first_poster[(i)-1][(j)-1];
    }
  }
  /*
  PRINT2D(first_poster);
  PRINT2D(one_clockwize_poster);
  PRINT2D(two_clockwize_poster);
  PRINT2D(one_anticlockwize_poster);
  PRINT2D(ans_poster);
  */
  int one_clockwize_poster_nonsame = 0, two_clockwize_poster_nonsame = 0, one_anticlockwize_poster_nonsame = 0, no_turn_poster_nonsame = 0;
  for (int i = 0; i < n; ++i) {
    for (int j = 0; j < n; ++j) {
      if (ans_poster[i][j] != one_clockwize_poster[i][j]) {
        ++one_clockwize_poster_nonsame;
      }
      if (ans_poster[i][j] != two_clockwize_poster[i][j]) {
        ++two_clockwize_poster_nonsame;
      }
      if (ans_poster[i][j] != one_anticlockwize_poster[i][j]) {
        ++one_anticlockwize_poster_nonsame;
      }
      if (ans_poster[i][j] != first_poster[i][j]) {
        ++no_turn_poster_nonsame;
      }
    }
  }
  if (no_turn_poster_nonsame <= one_clockwize_poster_nonsame && no_turn_poster_nonsame <= two_clockwize_poster_nonsame && no_turn_poster_nonsame <= one_anticlockwize_poster_nonsame) {
    cout << no_turn_poster_nonsame << "\n";
    return 0;
  }
  else if (one_clockwize_poster_nonsame <= two_clockwize_poster_nonsame && one_clockwize_poster_nonsame <= one_anticlockwize_poster_nonsame) {
    cout << 1 + one_clockwize_poster_nonsame << "\n";
    return 0;
  }
  else if (one_anticlockwize_poster_nonsame <= one_clockwize_poster_nonsame && one_anticlockwize_poster_nonsame <= two_clockwize_poster_nonsame) {
    cout << 1 + one_anticlockwize_poster_nonsame << "\n";
    return 0;
  }
  else if (two_clockwize_poster_nonsame <= one_clockwize_poster_nonsame && two_clockwize_poster_nonsame <= one_anticlockwize_poster_nonsame) {
    cout << 2 + two_clockwize_poster_nonsame << "\n";
    return 0;
  }
  
  return 0;
}
