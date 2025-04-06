#include <iostream>
using namespace std;
int ans(int n){
  return 2 * n + 3;
}
int main(){
  int n;
  cin >> n;
  cout << ans(n) << "\n";
}