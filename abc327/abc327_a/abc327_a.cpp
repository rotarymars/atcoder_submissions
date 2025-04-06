#include <iostream>
using namespace std;
int main() {
  string s;
  cin >> s >> s;
  bool ok = false;
  for (int i = 0; i < s.size() - 1; i++) {
    if (s[i] == 'a' && s[i + 1] == 'b') ok = true;
    if (s[i] == 'b' && s[i + 1] == 'a') ok = true;
  }
  cout << (ok ? "Yes\n" : "No\n");
}