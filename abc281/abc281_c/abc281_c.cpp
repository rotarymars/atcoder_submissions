#include <iostream>
#include <vector>
using namespace std;
int main(){
  long long n,t;
  cin>>n>>t;
  vector<long long>v(n);
  for(int i=0;i<n;i++){
    cin>>v[i];
    if(i!=0)[[likely]]v[i]=v[i-1]+v[i];
  }
  t%=v.back();
  for(int i=0;i<n;i++){
    if(t<v[i]){
      if(i==0)cout<<"1 "<<t<<endl;
      else cout<<i+1<<' '<<t-v[--i];
      break;
    }
  }
  return 0;
}