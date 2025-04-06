#include <bits/stdc++.h>
using namespace std;
int main(){
  int n;
  cin >> n;
  vector<int> a(n);
  for (auto &i : a){
    cin >> i;
  }
  sort(a.begin(), a.end());
  a.erase(unique(a.begin(), a.end()), a.end());
  for (auto i = a.begin(); i != a.end(); i++){
    if ((*lower_bound(a.begin(), a.end(), (*i) + 3) == ((*i) + 3)) && (*lower_bound(a.begin(), a.end(), (*i) + 6) == ((*i) + 6))){cout << "Yes\n"; return 0;}
  }
  cout << "No\n";
}