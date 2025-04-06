#include <algorithm>
#include <iostream>
#include <string>
#include <vector>

using namespace std;
long long GCD(long long a, long long b) {
  long long  small = min(a, b);
  long long  big = max(a, b);
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
  long long n;
  cin >> n;
  long long a, b;
  cin >> a >> b;
  for (long long i = 0; i < n - 1; i++) {
    a = GCD(a, b);
    if (i != n - 2) {
      cin >> b;
    }
  }
  cout << a << "\n";
  return 0;
}
