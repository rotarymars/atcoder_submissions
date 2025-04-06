#include <algorithm>
#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
  cin.tie(nullptr);
  ios_base::sync_with_stdio(false);

  // write code here
  int n;
  string s, t;
  cin >> n >> s >> t;
  int cnt = 0;
  for (size_t i = 0; i < n; ++i)
  {
    if (s[i] != t[i]) {
      ++cnt;
    }
  }
  cout << cnt << "\n";
  return 0;
}
