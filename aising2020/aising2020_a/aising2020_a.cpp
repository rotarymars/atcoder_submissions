#include <iostream>
using namespace std;
signed main()
{
    cin.tie(nullptr);
    ios_base::sync_with_stdio(false);
    int l,r,d;
    cin>>l>>r>>d;
    cout<<r/d-(l-1)/d<<endl;
    return 0;
}
