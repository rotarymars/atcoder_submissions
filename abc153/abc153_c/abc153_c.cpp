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
#include <algorithm>
#include <iterator>
#include <vector>
#include <numeric>
using namespace std;
signed main(){
	cin.tie(nullptr);
	ios_base::sync_with_stdio(false);
	int n,k;
	cin>>n>>k;
	vector<long long>v(n);
	for(long long &i:v)cin>>i;
	sort(v.begin(),v.end());
	cout<<accumulate(v.begin(),next(v.begin(),v.size()-min(k,n)),0ll)<<endl;
	DP(v.size()-k+1);
	return 0;
}
