#include <iostream>
using namespace std;
template<typename T>
T I(){ T a; cin >> a; return a;}
int main(){
  int n = I<int>();
  for (int i = 1; i <= n; i++) cout << ((i % 3) ? 'o': 'x');
  cout << endl;
}