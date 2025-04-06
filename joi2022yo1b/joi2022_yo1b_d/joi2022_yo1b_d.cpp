#include <bits/stdc++.h>
using namespace std;
int main(){
  int n;
  cin >> n;
  vector<int> a(n);
  set<int> b;
  for(int i = 0; i < n; ++i){
    cin >> a[i];
  }
  sort(a.begin(), a.end());
  for(int i = 0; i < n; ++i){
    b.insert(a[i]);
  }
  int ans = a[0];
  for(auto i = b.begin(); i != b.end(); ++i){
    if(count(a.begin(), a.end(), ans) > count(a.begin(), a.end(), *i)){
      ans = *i;
    }
  }
  cout << ans << "\n";
  return 0;
}