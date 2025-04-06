#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int main() {
  cin.tie(nullptr);
  ios::sync_with_stdio(false);

  // write here
  int n;
  cin >> n;

  typedef vector<int> IntVector;
  IntVector v(n, 0);

  int a;
  for (int i = 0; i < ((2 * n) - 1); ++i) {
    cin >> a;
    v[a - 1] += 1;
  }

  for (int i = 0; i < ((2 * n) - 1); ++i) {
    if(v[i] == 1) {
      cout << (i + 1) << "\n";
      break;
    }
  }

  return 0;
}
