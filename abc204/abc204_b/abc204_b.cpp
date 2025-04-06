#include <iostream>
using namespace std;
signed main()
{
    cin.tie(nullptr);
    ios_base::sync_with_stdio(false);
    int n;
    cin >> n;
    int ans=0;
    for(;n;n--){
        int tmp;
        cin >> tmp;
        ans+=(tmp>=10?tmp-10:0);
    }
    cout<<ans<<endl;
    return 0;
}
