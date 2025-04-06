#include<bits/stdc++.h>
using namespace std;
int main(){
  int a, b;
  cin >> a >> b;
  bool ok = false;
  if(a + 1 == b && a % 3 != 0){
    cout << "Yes";
  }else{
    cout << "No";
  }
}