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
    string s;
    cin >> n >> s;
    int ans, count = 0;
    for (size_t i = 0; i < n - 2; ++i)
    {
      if (s.substr(i, 3) == "ABC") {
        ans = i + 1;
        ++count;
        break;
      }
    }
    if (count == 1) {
      cout << ans << endl;
    }
    else {
      cout << -1 << endl;
    }
    return 0;
}
