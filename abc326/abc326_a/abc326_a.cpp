#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
#include <numeric>
#include <map>
#include <set>
#include <cmath>

using ll = long long;
using VI = std::vector<int>;
using VVI = std::vector<VI>;
using VC = std::vector<char>;
using VVC = std::vector<VC>;

int pt2n(const int x, const int y, const int h) { return (x * h) + y; }
std::pair<int, int> num2pt(const int n, const int w) { return std::make_pair(n / w, n % w); }

using namespace std;

int main()
{
  cin.tie(nullptr);
  ios_base::sync_with_stdio(false);

  // write code here
  int x, y;
  cin >> x >> y;
  if (y - x <= 2 && y - x >= 0) {
    cout << "Yes\n";
  }
  else if (y - x >= -3 && y - x <= 0) {
    cout << "Yes\n";
  }
  else {
    cout << "No\n";
  }
  return 0;
}
