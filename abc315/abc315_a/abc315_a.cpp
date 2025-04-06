#include<bits/stdc++.h>
using namespace std;
int main(){
  string s;
  cin >> s;
  string ans = "";
  for(size_t i = 0; i < s.size(); i ++){
    if(s[i] != 'a' && s[i] != 'i' && s[i] != 'u' && s[i] != 'e' && s[i] != 'o'){
      ans += s[i];
    }
  }
  cout << ans << '\n';
}