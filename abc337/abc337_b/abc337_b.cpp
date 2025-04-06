#include <iostream>
#include <string>
#include <regex>
using namespace std;
int main() {
  string s;
  cin >> s;
  regex r("^A*B*C*$");
  if (regex_match(s, r)) cout << "Yes\n";
  else cout << "No\n";
}