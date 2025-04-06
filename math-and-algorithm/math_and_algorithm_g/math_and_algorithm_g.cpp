#include <iostream>
using namespace std;

int main(){
  int n, x, y, m = -1;
  cin >> n >> x >> y;
  for(int i = 0; i < n + 1; ++i){
    if(i % x == 0 || i % y == 0){
      ++m;
    }
  }
  cout << m << "\n";
}