#include <string>
#include <iostream>
#ifndef __ROTARYMARS__ARYSYSTEM__
#define __ROTARYMARS__ARYSYSTEM__
#include <vector>
#include <algorithm>
template<class T>
T KTOTEN(int a,int k){
	int ret=0;
	int now=1;
	while(a>0){
		ret+=(a%10)*now;
		a/=10;
		now*=k;
	}
	return ret;
}


std::vector<int> TENTOK(int n, int k){
    std::vector<int>ret;
    while(n>0){
        ret.push_back(n%k);
        n/=k;
    }
    reverse(ret.begin(),ret.end());
    return ret;
}
#else
#endif
using namespace std;
int main(){
  int n;
  cin>>n;
  int ans=0;
  for(int i=1;i<=n;i++){
    auto a=TENTOK(i,8);
    string s=to_string(i);
    if(count(s.begin(),s.end(),'7')!=0||count(a.begin(),a.end(),7)!=0)continue;
    for(int j=0;j<a.size();j++)clog<<a[j];
    clog<<endl;
    ++ans;
  }
  cout<<ans<<endl;
}