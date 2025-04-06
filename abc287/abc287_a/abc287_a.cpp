#include <iostream>
using namespace std;
signed main()
{
    cin.tie(nullptr);
    ios_base::sync_with_stdio(false);
    int n,cnt=0;
    cin>>n;
    for(int i=0;i<n;i++){
        string tmp;
        cin>>tmp;
        if(tmp=="For")cnt++;
    }
    if(cnt>n/2)cout<<"Yes\n";
    else cout<<"No\n";
    return 0;
}
