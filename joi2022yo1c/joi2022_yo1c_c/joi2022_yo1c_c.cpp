#include <vector>
#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main(){
  int n, k;
  string s;
  cin >> n >> k >> s;
  int red = 0;
  for(int i = 0; i < n - 1; ++i){
    if(s[i] == 'R'){
      ++red;
    }
  }
  if(red != k){
    cout << 'R' << "\n";
  }else{
    cout << 'W' << "\n";
  }
}