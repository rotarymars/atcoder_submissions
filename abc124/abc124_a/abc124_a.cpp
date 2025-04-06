#include <iostream>
using namespace std;
signed main()
{
    cin.tie(nullptr);
    ios_base::sync_with_stdio(false);
    int a,b;
    cin>>a>>b;
    int ans=0;
    for(int i=0;i<2;i++){
        ans+=max(a,b);
        if(a<b)b--;
        else a--;
    }
    cout<<ans<<endl;
    return 0;
}
