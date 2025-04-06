#include <iostream>
#include <regex>
using namespace std;
signed main() {
  cin.tie(nullptr);
  ios_base::sync_with_stdio(false);
  string s, t;
  cin >> s >> t;
  for (auto& i : s) i = (char)(i - 32);
  string r = "[A-Z]*" + t.substr(0, 1) + "[A-Z]*" + t.substr(1, 1) + "[A-Z]*", reee = "[A-Z]*" + t.substr(0, 1) + "[A-Z]*" + t.substr(1, 1) + "[A-Z]*" + t.substr(2, 1) + "[A-Z]*";
  regex re(r), ree(reee);
  if (t[2] == 'X') {
    if (regex_match(s, re)) cout << "Yes\n";
    else cout << "No\n";
  }
  else {
    if (regex_match(s, ree)) cout << "Yes\n";
    else cout << "No\n";
  }
  return 0;
}
