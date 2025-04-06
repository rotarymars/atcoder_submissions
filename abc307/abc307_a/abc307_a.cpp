#include<bits/stdc++.h>
using namespace std;
int main(){
  int n;
  cin >> n;
  int ans;
  for(int i = 0; i < n; i++){
    ans = 0;
    for(int j = 0; j < 7; j++){
      int temp;
      cin >> temp;
      ans += temp;
    }
    if(i == 0){
      cout << ans;
    }else{
      cout << ' ' << ans;
    }
  }
}