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
  long long n;
  cin >> n;
  while (n % 2 == 0 || n % 3 == 0) {
    if (n % 2 == 0) {
      n /= 2;
    }
    else {
      n /= 3;
    }
  }
  if (n == 1) {
    cout << "Yes\n";
    return 0;
  }
  cout << "No\n";
  return 0;
}
