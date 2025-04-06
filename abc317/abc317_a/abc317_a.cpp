#include<bits/stdc++.h>
using namespace std;
int main(){
  int n, h, x;
  cin >> n >> h >> x;
  for(int i = 0; i < n; i++){
    int p;
    cin >> p;
    if(p + h >= x){
      cout << i + 1;
      return 0;
    }
  }
}