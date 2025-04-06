#include <bits/stdc++.h>
using namespace std;
int main(){
  int n;
  cin >> n;
  int maxint = 0, first;
  for(int i = 0; i < n; i++){
    if(i == 0){
      cin >> first;
    }else{
      int temp;
      cin >> temp;
      maxint = max(temp, maxint);
    }
  }
  if(maxint - first >= 0){
    cout << maxint - first + 1;
  }else{
    cout << 0;
  }
}