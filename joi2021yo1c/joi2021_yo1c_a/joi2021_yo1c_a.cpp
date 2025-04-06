#include <iostream>
using namespace std;
int main(){
  int a, b;
  cin >> a >> b;
  int c, d;
  c = a - b;
  d = a + b;
  if(c > d){
    cout << c << "\n" << d;
  }else{
    cout << d << "\n" << c;
  }
  return 0;
}