#include <iostream>
using namespace std;
int main(){
  int n;
  cin >> n;
  int ans = 0;
  for (int i = 0; i < 2 * n - 1; i++){
    int temp;
    cin >> temp;
    ans ^= temp;
  }
  cout << ans << endl;
}