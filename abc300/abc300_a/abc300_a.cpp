#include <bits/stdc++.h>
using namespace std;
int main(){
  int n, a, b;
  cin >> n >> a >> b;
  vector<int> c(n);
  for(int &a : c){
    cin >> a;
  }
  int ans = a + b;
  for(size_t i = 0; i < n; i++){
    if(ans == c[i]){
      cout << i + 1 << endl;
      return 0;
    }
  }
}