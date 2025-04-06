#include <iostream>
#include <string>
#include <regex>
using namespace std;
int main() {
  string s;
  cin >> s;
  regex r("^A*B*C*$");
  cout << (regex_match(s, r) ? "Yes\n" : "No\n");
}