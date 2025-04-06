#include <iostream>
#include <map>
#include <vector>
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
    map<int,int>m;
    vector<int>v(5);
    for(int&i:v)cin>>i;
    for(int&i:v)m[i]++;
    bool two=false,three=false;
    for(auto i=m.begin();i!=m.end();i++){
        if(i->second==2)two=true;
        if(i->second==3)three=true;
    }
    if(two&&three)cout<<"Yes\n";
    else cout<<"No\n";
    return 0;
}
