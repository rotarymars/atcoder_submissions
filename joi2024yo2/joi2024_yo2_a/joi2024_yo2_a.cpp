#include <bits/stdc++.h>
using namespace std;
int main(){
  int n;
  cin >> n;
  int arraymaxelement = 0;
  vector<int> a(n);
  for (auto &i : a){
    cin >> i;
    arraymaxelement = max(arraymaxelement, i);
  }
  vector<bool> exist(arraymaxelement + 1, false);
  for (auto &i : a){
    exist[i] = true;
  }
  for (auto &i : a){
    if (exist[i] && exist[i + 3] && exist[i + 6]){
      cout << "Yes\n";
      return 0;
    }
  }
  cout << "No\n";
  return 0;
}