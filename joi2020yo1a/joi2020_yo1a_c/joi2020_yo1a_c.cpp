#include <vector>
#include <iostream>
#include <algorithm>
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
  a.insert(a.end(), b.begin(), b.end());
  sort(a.begin(), a.end());
  for(int i = 0; i < n + m; ++i){
    cout << a[i] << "\n";
  }
}