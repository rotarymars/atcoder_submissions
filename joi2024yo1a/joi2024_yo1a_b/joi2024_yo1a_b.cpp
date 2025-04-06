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
  vector<int> a(3);
  cin >> a[0] >> a[1] >> a[2];
  sort(a.begin(), a.end());
  if (a[2] == a[0] + a[1]) {
    cout << 1 << "\n";
    return 0;
  }
  cout << 0 << "\n";
  return 0;
}
