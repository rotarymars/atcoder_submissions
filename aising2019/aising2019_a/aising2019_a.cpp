#include <iostream>
using namespace std;
signed main()
{
    cin.tie(nullptr);
    ios_base::sync_with_stdio(false);
    int n,h,w;
    cin>>n>>h>>w;
    cout<<(n-h+1)*(n-w+1)<<endl;
    return 0;
}
