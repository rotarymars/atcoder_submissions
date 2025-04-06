#include <iostream>
using namespace std;
signed main()
{
    cin.tie(nullptr);
    ios_base::sync_with_stdio(false);
    int a,b;
    cin>>a>>b;
    int tmp;
    a--;
    for(int i=0;i<a*2+b;i++){
        cin>>tmp;
    }
    cout<<tmp<<endl;
    return 0;
}
