#include<bits/stdc++.h>
using namespace std;
int main(){
  int n, m, p, ans = 0;
  cin >> n >> m >> p;
  for(int i = 1; i <= n; i++){
    if((i - m) % p == 0){
      ans++;
    }
  }
  cout << ans;
}