#include <iostream>
using namespace std;
signed main() {
  cin.tie(nullptr);
  ios::sync_with_stdio(false);
  string s;
  cin>>s;
  for(auto&i:s){
    if(i<='z'&&i>='a'){
      continue;
    }
    cout<<i;
  }
  cout<<endl;
  return 0;
}
