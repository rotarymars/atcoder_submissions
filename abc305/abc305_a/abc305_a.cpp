#include<bits/stdc++.h>
using namespace std;
int main(){
  int n;
  cin >> n;
  for(int i = 0; i <= 100; i += 5){
    if(abs(n - i) < 3){
      cout << i;
      return 0;
    }
  }
}