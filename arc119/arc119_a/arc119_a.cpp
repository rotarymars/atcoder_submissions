#include <iostream>
#include <limits.h>
using namespace std;
signed main(){
	cin.tie(nullptr);
	ios_base::sync_with_stdio(false);
	long long n;
	cin>>n;
	long long ans=LLONG_MAX;
	for(long long i=0;i<=60;i++){
		long long a,b,c;
		b=i;
		a=n/(1ll<<b);
		c=n-a*(1ll<<i);
		ans=min(ans,a+b+c);
	}
	cout<<ans<<endl;
	return 0;
}
