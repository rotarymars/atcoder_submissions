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
    int a, out = 0;
    for (size_t i = 0; i < n; ++i)
    {
      cin >> a;
      out += a;
    }
    cout << out << "\n";
    return 0;
}
