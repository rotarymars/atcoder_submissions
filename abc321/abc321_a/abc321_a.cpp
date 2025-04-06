#include <bits/stdc++.h>
using namespace std;
int main(){
  int n;
  cin >> n;
  int backnum = n % 10;
  n /= 10;
  while (n){
    if (backnum < n % 10){
      backnum = n % 10;
      n /= 10;
      continue;
    }
    cout << "No\n";
    return 0;
  }
  cout << "Yes\n";
}