#include<bits/stdc++.h>
using namespace std;
int main(){
  int n;
  string s;
  cin >> n >> s;
  string ans = "";
  for(int i = 0; i < n; i++){
    ans = ans + s[i] + s[i];
  }
  cout << ans;
}