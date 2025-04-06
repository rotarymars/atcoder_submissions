#include <iostream>
using namespace std;
template<class T=int>
T I(){
  T i;
  cin>>i;
  return i;
}
int main(){
  int n;
  cin>>n;
  int ans=0;
  for(;n;n--)ans+=I();
  cout<<ans<<endl;
}