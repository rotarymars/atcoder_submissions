#include <algorithm>
#include <iostream>
#include <set>
#include <vector>
using namespace std;
int main(){
  int n;
  cin>>n;
  vector<int>v(n);
  for(int&i:v)cin>>i;
  sort(v.begin(),v.end());
  int ans=0;
  for(int i=0;i<n;i++)for(int j=i+1;j<n;j++)for(int k=j+1;k<n;k++){
    vector<int>temp{v[i],v[j],v[k]};
    if(temp[0]==temp[1]||temp[1]==temp[2]||temp[0]==temp[2])continue;
    sort(temp.begin(),temp.end());
    if(temp[2]<temp[0]+temp[1])++ans;
  }
  cout<<ans<<endl;
}