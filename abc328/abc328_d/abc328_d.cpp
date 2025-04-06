#include <bits/stdc++.h>
using namespace std;
int main(){
  string s;
  cin >> s;
  string s_s = "";
  for(int i = 0; i < s.size(); ++i){
    s_s = s_s + s[i];
    if(s_s.size() >= 3){
      if(s_s[s_s.size() - 3] == 'A' and s_s[s_s.size() - 2] == 'B' and s_s[s_s.size() - 1] == 'C'){
        s_s.pop_back();
        s_s.pop_back();
        s_s.pop_back();
      }
    }
  }
  cout << s_s << "\n";
}