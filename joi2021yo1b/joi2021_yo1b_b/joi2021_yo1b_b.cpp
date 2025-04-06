#include <bits/stdc++.h>
using namespace std;
int main(){
  int n;
  string s;
  cin >> n >> s;
  int firstnum = -1, secondnum = -1;
  for (int i = 0; i < n; i++){
    if (s[i] == 'I'){
      firstnum = i;
      break;
    }
  }
  if (firstnum == -1){
    cout << "No\n";
    return 0;
  }
  for (int i = firstnum; i < n; i++){
    if (s[i] == 'O'){
      secondnum = i;
      break;
    }
  }
  if (secondnum == -1){
    cout << "No\n";
    return 0;
  }
  for (int i = secondnum; i < n; i++){
    if (s[i] == 'I'){
      cout << "Yes\n";
      return 0;
    }
  }
  cout << "No\n";
  return 0;
}