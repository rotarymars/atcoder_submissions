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
  cin >> n;
  vector<int> a(n);
  for (size_t i = 0; i < n; ++i)
  {
    cin >> a[i];
  }
  sort(a.begin(), a.end());
  a.erase(unique(a.begin(), a.end()), a.end());
  for (size_t i = 0; i < a.size(); ++i)
  {
    cout << a[i] << "\n";
  }
  return 0;
}
