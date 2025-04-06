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
#include <vector>
#include <limits.h>
using namespace std;
signed main()
{
    cin.tie(nullptr);
    ios_base::sync_with_stdio(false);
    int n,k;
    cin>>n>>k;
    vector<int>v(n);
    for(int&i:v)cin>>i;
    sort(v.begin(),v.end());
    int ans=INT_MAX;
    for(int i=0;i<=k;i++){
        ans=min(ans,v[n-1-k+i]-v[i]);
    }
    cout<<ans<<endl;
    return 0;
}
