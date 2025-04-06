#include <iostream>
using namespace std;
int main(){
  int s, a, b;
  cin >> s >> a >> b;
  int i = 0;
  while(s > a + b * i){
    ++i;
  }
  cout << 250 + 100 * i << "\n";
}