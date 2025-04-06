#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
#include <numeric>
using namespace std;

int main(){
  cin.tie(nullptr);
  ios_base::sync_with_stdio(false);

  // write code here
  int n;
  cin >> n;
  vector<int> w(n);
  vector<int> x(n);
  for (size_t i = 0; i < n; ++i)
  {
    cin >> w[i] >> x[i];
  }
  vector<int> check;
  int cnt = 0;
  for (size_t i = 0; i < 24; ++i)
  {
    check.erase(check.begin(), check.end());
    for (size_t j = 0; j < n; ++j)
    {
      if ((x[j] + i) % 24<= 17 && (x[j] + i) % 24 >= 9) {
        check.push_back(w[j]);
      }
    }
    if (cnt < accumulate(check.begin(), check.end(), 0)) {
      cnt = accumulate(check.begin(), check.end(), 0);
    }
  }
  cout << cnt << "\n";
  return 0;
}