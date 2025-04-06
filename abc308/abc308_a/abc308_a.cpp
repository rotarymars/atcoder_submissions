#include<bits/stdc++.h>
using namespace std;
int main(){
  int a[8];
  for(int i = 0; i < 8; i++){
    cin >> a[i];
    if(a[i] % 25 != 0 || a[i] < 100 || a[i] > 675){
      cout << "No";
      return 0;
    }
  }
  for(int i = 0; i < 7; i++){
    if(a[i] > a[i + 1]){
      cout << "No";
      return 0;
    }
  }
  cout << "Yes";
}