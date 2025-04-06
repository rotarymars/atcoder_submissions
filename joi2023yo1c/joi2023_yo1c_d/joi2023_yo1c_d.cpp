#include <iostream>
#include <string>
#include <vector>
using namespace std;
int main(){
  int n, b;
  cin >> n;
  vector<int> a(n, 0);
  for(int i = 0; i < n; ++i){
    cin >> b;
    a[i] = b;
  }
  for(int i = 0; i < n; ++i){
    int rank = 1;
    for(int i_1 = 0; i_1 < n; ++i_1){
      if(a[i] > a[i_1]){
        ++rank;
      }
    }
  cout << rank << "\n";
  }
}