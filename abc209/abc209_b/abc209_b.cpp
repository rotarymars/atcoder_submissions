#include <iostream>
using namespace std;
signed main()
{
    cin.tie(nullptr);
    ios_base::sync_with_stdio(false);
    int n,x;
    cin>>n>>x;
    int a=0;
    for(int i=0;i<n;i++){
        int tmp;
        cin>>tmp;
        if(i%2)a+=tmp-1;
        else a+=tmp;
    }
    if(a<=x)cout<<"Yes\n";
    else cout<<"No\n";
    return 0;
}
