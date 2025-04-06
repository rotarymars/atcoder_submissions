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
  int a, b;
  cin >> a;
  for (size_t i = 0; i < n - 1; ++i)
  {
    cin >> b;
    if (a != b) {
      cout << "No\n";
      return 0;
    }
  }
  cout << "Yes\n";
  return 0;
}
