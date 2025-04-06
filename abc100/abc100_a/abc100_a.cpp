#include <iostream>
using namespace std;
signed main()
{
    cin.tie(nullptr);
    ios_base::sync_with_stdio(false);
    int a,b;
    cin>>a>>b;
    if(a<=8&&b<=8)cout<<"Yay!\n";
    else cout<<":(\n";
    #ifdef _DEBUG
    cout<<"Hello,World!\n";
    #endif
    return 0;
}
