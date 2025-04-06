#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
signed main()
{
    cin.tie(nullptr);
    ios_base::sync_with_stdio(false);
    int n,m;
    cin>>n>>m;
    vector<int>a(n),b(m);
    for(int i=0;i<n;i++)cin>>a[i];
    for(int i=0;i<m;i++)cin>>b[i];
    vector<int>c;
    c.insert(c.end(),a.begin(),a.end());
    c.insert(c.end(),b.begin(),b.end());
    sort(a.begin(),a.end());
    sort(b.begin(),b.end());
    sort(c.begin(),c.end());
    for(int i=0;i<n+m-1;i++){
        if(find(a.begin(),a.end(),c[i])!=a.end()&&find(a.begin(),a.end(),c[i+1])!=a.end()){
            cout<<"Yes\n";
            return 0;
        }
    }
    cout<<"No\n";
    return 0;
}
