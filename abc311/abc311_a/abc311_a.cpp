#include<bits/stdc++.h>
using namespace std;
int main(){
  int n;
  string s;
  cin >> n >> s;
  bool abool = false, bbool = false, cbool = false;
  for(int i = 0; i < n; i++){
    if(s[i] == 'A'){
      abool = true;
    }else if(s[i] == 'B'){
      bbool = true;
    }else if(s[i] == 'C'){
      cbool = true;
    }
    if(abool && bbool && cbool){
      cout << i + 1;
      return 0;
    }
  }
}