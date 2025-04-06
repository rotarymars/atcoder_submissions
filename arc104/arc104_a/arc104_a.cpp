#include <iostream>
using namespace std;
signed main()
{
    cin.tie(nullptr);
    ios_base::sync_with_stdio(false);
    int a,b;
    cin>>a>>b;
    int tmp=(a-b)/2;
    cout<<a-tmp<<' '<<tmp<<endl;
    return 0;
}
