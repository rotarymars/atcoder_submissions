#include <iostream>
using namespace std;
signed main()
{
    cin.tie(nullptr);
    ios_base::sync_with_stdio(false);
    int a,b;
    cin>>a>>b;
    if(a*2==b||a*2+1==b)cout<<"Yes\n";
    else cout<<"No\n";
    return 0;
}
