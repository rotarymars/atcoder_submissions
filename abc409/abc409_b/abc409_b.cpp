#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
signed main() {
  cin.tie(nullptr);
  ios::sync_with_stdio(false);
  int n;
  cin>>n;
  vector<int>v(n);
  for(auto&i:v){
    cin>>i;
  }
  sort(v.begin(),v.end(),greater<int>());
  int ans=0;
  for(int i=0;i<n;++i){
    if(v[i]>=i+1)ans=i+1;
    else break;
  }
  cout<<ans<<endl;
  return 0;
}
