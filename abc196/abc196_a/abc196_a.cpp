#include <iostream>
#include <algorithm>
using namespace std;
signed main()
{
    cin.tie(nullptr);
    ios_base::sync_with_stdio(false);
    int a,b,c,d;
    cin>>a>>b>>c>>d;
    cout<<max({a-c,a-d,b-c,b-d})<<endl;
    return 0;
}
