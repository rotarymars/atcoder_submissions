#include <iostream>
#ifndef __ROTARYMARS__DEBUGPRINT__
#define __ROTARYMARS__DEBUGPRINT__
#include <iostream>
#ifdef _DEBUG
#define DP(x) cout << #x << " = " << x << endl
#else
#define DP(x) ;
#endif
#else
#endif
#include <string>
#define int long long
using namespace std;
int change(int a,int b){
	int ret=0;
	int now=1;
	while(a>0){
		ret+=(a%10)*now;
		a/=10;
		now*=b;
	}
	return ret;
}

signed main(){
	cin.tie(nullptr);
	ios_base::sync_with_stdio(false);
	int k,a,b;
	cin>>k>>a>>b;
	DP(change(a,k));DP(change(b,k));
	cout<<change(a,k)*change(b,k)<<endl;
	return 0;
}
