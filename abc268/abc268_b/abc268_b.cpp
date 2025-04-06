#include <iostream>
#ifdef _DEBUG
#define DP(x) cout << #x << " = " << x << endl
#else
#define DP(x) ;
#endif
using namespace std;
signed main()
{
    cin.tie(nullptr);
    ios_base::sync_with_stdio(false);
    string s,t;
    cin>>s>>t;
    if(s.size()>t.size()){
        cout<<"No\n";
        return 0;
    }
    for(int i=0;i<s.size();i++)if(s[i]!=t[i]){
        cout<<"No\n";
        return 0;
    }
    cout<<"Yes\n";
    return 0;
}
