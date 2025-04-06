#include <algorithm>
#include <iostream>
#include <string>
#include <vector>

using namespace std;
int GCD(int a, int b) {
  int small = min(a, b);
  int big = max(a, b);
  while (big % small != 0) {
    big = big % small;
    a = big;
    b = small;
    big = max(a, b);
    small = min(a, b);
  }
  return small;
}
int main()
{
  cin.tie(nullptr);
  ios_base::sync_with_stdio(false);

  // write code here
  int a, b;
  cin >> a >> b;
  cout << GCD(a, b) << "\n";
    return 0;
}
