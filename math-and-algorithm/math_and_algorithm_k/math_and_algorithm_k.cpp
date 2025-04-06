#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
#include <cmath>
using namespace std;

bool checkprime(int a) {
  for (size_t j = 2; pow(j, 2.0) <= a; j++)
  {
    if (a % (int)j == 0) {
      return false;
    }
  }
  return true;
}
int main()
{
    cin.tie(nullptr);
    ios_base::sync_with_stdio(false);

    // write code here
    int n;
    cin >> n;
    for (int i = 2; i <= n; i++) {
      if (checkprime(i)) {
        cout << i << " ";
      }
    }
    cout << "\n";
    return 0;
}
