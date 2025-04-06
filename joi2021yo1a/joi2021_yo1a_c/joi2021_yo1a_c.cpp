#include <string>
#include <algorithm>
#include <vector>
#include <iostream>
using namespace std;
int main(){
  int n, m;
  cin >> n >> m;
  vector<int> a(n);
  vector<int> b(m);
  vector<int> c;
  for(int i = 0; i < n; ++i){
    cin >> a[i];
  }
  for(int i = 0; i < m; ++i){
    cin >> b[i];
  }
  sort(a.begin(), a.end());
  sort(b.begin(), b.end());
  a.erase(unique(a.begin(), a.end()), a.end());
  b.erase(unique(b.begin(), b.end()), b.end());
  for(int i = 0; i < a.size(); ++i){
    for(int j = 0; j < b.size(); ++j){
      if(a[i] == b[j]){
        c.push_back(a[i]);
      }
    }
  }
  for(int i = 0; i < c.size(); ++i){
    cout << c[i] << "\n";
  }
  return 0;
}