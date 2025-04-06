#include <iostream>
#ifndef __ROTARYMARS__ARYSYSTEM__
#define __ROTARYMARS__ARYSYSTEM__
#include <vector>
#include <algorithm>
std::vector<int> CHANGEARYSYSTEM(int n, int k){
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
signed main()
{
    cin.tie(nullptr);
    ios_base::sync_with_stdio(false);
		int p;
		cin>>p;
		int a[11];
		a[0]=1;
		for(int i=1;i<=10;i++)a[i]=a[i-1]*i;
		int ans=0;
		for(int i=10;i>=1;i--){
			ans+=p/a[i];
			p%=a[i];
		}
		cout<<ans<<endl;
    return 0;
}
