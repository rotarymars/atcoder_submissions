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
    string s;
    cin >> s;
    for (size_t i = 1; i < s.size(); i += 2)
    {
      if (s[i] != '0') {
        cout << "No\n";
        return 0;
      }
    }
    cout << "Yes\n";
    return 0;
}
