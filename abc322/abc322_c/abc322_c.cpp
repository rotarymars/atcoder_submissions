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
    int n, m;
    cin >> n >> m;
    vector<int> a(m);
    for (size_t i = 0; i < m; ++i)
    {
      cin >> a[i];
    }
    sort(a.begin(), a.end());
    for (size_t i = 1; i <= n; ++i)
    {
      cout << *lower_bound(a.begin(), a.end(), (int)i) - i << "\n";
    }
    return 0;
}
