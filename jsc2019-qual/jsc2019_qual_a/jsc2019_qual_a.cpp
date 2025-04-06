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
using namespace std;
signed main()
{
    cin.tie(nullptr);
    ios_base::sync_with_stdio(false);
    int m,d;
    cin>>m>>d;
    int ans=0;
    for(int i=1;i<=m;i++)for(int j=1;j<=d;j++){
        if(j/10>=2&&j%10>=2)if(i==(j/10)*(j%10)){
            ans++;
            DP(i);DP(j);
        }
    }
    cout<<ans<<endl;
    return 0;
}
