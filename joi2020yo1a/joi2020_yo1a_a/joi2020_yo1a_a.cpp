#include <iostream>
using namespace std;
int main(){
  int a[3];
  cin >> a[0] >> a[1] >> a[2];
  int one = 0, two = 0;
  for(int i = 0; i < 3; ++i){
    if(a[i] == 1){
      ++one;
    }else{
      ++two;
    }
  }
  if(one > two){
    cout << 1 << endl;
  }else{
    cout << 2 << endl;
  }
  return 0;
}