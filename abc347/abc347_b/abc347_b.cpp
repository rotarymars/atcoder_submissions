#include <iostream>
#include <set>
using namespace std;
signed main()
{
    cin.tie(nullptr);
    ios_base::sync_with_stdio(false);
    set<string>se;
    string s;
    cin>>s;
    for(int i=0;i<s.size();i++){
        for (int j=0;j<s.size()-i+1;j++){
            string tmp=s.substr(i,j);
            if (tmp!="")se.insert(tmp);
            #ifdef _DEBUG
            cout<<i<<' '<<j<<endl;
            #endif
        }
    }
    cout<<se.size()<<endl;
    #ifdef _DEBUG
    for (auto &i:se)cout<<i<<endl;
    #endif
    return 0;
}
