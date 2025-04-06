#include <iostream>
using namespace std;
signed main()
{
    cin.tie(nullptr);
    ios_base::sync_with_stdio(false);
    int a,b;
    cin>>a>>b;
    if(a!=b)
        cout<<6-a-b<<endl;
    else cout<<-1<<endl;
    return 0;
}
