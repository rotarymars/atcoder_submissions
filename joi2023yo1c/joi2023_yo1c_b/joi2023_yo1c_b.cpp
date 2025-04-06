#include <iostream>
using namespace std;
int main(){
  int a, b, c;
  cin >> a >> b;
  c = a + 7 * b;
  if(c <= 30){
    cout << 1 << endl;
  }else{
    cout << 0 << endl;
  }
}