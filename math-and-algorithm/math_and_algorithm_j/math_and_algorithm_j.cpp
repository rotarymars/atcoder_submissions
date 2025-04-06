#include <iostream>
using namespace std;
int main(){
  int n;
  long long ans = 1;
  cin >> n;
  for(int i = 1; i < n + 1; ++i){
    ans *= i;
  }
  cout << ans << "\n";
}