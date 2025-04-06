#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
  int n;
  string s;
  cin >> n >> s;
  vector<char> v{'a', 'i', 'u', 'e','o'};
  int cnt = 0;
  for (int i = 0; i < n; i++) if (count(v.begin(), v.end(), s[i])) cnt++;
  cout << cnt << endl;
}