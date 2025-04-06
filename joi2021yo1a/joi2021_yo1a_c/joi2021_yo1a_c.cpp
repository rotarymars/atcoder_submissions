#include <iostream>
#include <set>
#include <vector>
using namespace std;
int main(){
  int n, m;
  cin >> n >> m;
  set<int> a, b;
  int mem;
  for(int i = 0; i < n; ++i){
    cin >> mem;
    a.insert(mem);
  }
  for(int i = 0; i < m; ++i){
    cin >> mem;
    b.insert(mem);
  }
  for(auto i = a.begin(); i != a.end(); ++i){
    for(auto j = b.begin(); j != b.end(); ++j){
      if(*i == *j){
        cout << *i << "\n";
      }
    }
  }
  return 0;
}