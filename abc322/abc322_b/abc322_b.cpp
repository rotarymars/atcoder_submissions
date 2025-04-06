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
    string s, t;
    cin >> n >> m >> s >> t;
    string prefix = t.substr(0, n);
    string suffix = t.substr(m - n, n);
    if (s == prefix && s == suffix) {
      cout << 0 << "\n";
    }
    else if (s == prefix && s != suffix) {
      cout << 1 << "\n";
    }
    else if (s != prefix && s == suffix) {
      cout << 2 << "\n";
    }
    else {
      cout << 3 << "\n";
    }
    return 0;
}
