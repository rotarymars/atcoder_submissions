#include <iostream>
using namespace std;
signed main()
{
    cin.tie(nullptr);
    ios_base::sync_with_stdio(false);
    int n;
    cin>>n;
    if(n>=400&&n<=599)cout<<8<<endl;
    if(n>=600&&n<=799)cout<<7<<endl;
    if(n>=800&&n<=999)cout<<6<<endl;
    if(n>=1000&&n<=1199)cout<<5<<endl;
    if(n>=1200&&n<=1399)cout<<4<<endl;
    if(n>=1400&&n<=1599)cout<<3<<endl;
    if(n>=1600&&n<=1799)cout<<2<<endl;
    if(n>=1800&&n<=1999)cout<<1<<endl;
    return 0;
}
