#include <vector>
#include <string>
#include <iostream>
using namespace std;
int main(){
  int n, m, count = 0;
  cin >> n >> m;
  vector<int> a(n);
  vector<int> b(m);
  for(int i = 0; i < n; ++i){
    cin >> a[i];
  }
  for(int i = 0; i < m; ++i){
    cin >> b[i];
  }
  for(int i = 0; i < n; ++i){
    for(int j = 0; j < m; ++j){
      if(a[i] <= b[j]){
        ++count;
      }
    }
  }
  cout << count << "\n";
}