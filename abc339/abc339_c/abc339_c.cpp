#include <iostream>
#include <vector>
using namespace std;
#define int long long
signed main(){
  int n;
  cin >> n;
  int ans = 0;
  for (; n; n--){
    int temp;
    cin >> temp;
    if ((ans += temp) < 0){
      ans = 0;
    }
  }
  cout << ans << "\n";
}