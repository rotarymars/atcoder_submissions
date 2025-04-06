#include <iostream>
using namespace std;
signed main()
{
    cin.tie(nullptr);
    ios_base::sync_with_stdio(false);
    int n;
    cin>>n;
    for(;n;n--){
        string s;
        cin>>s;
        if(s=="and"||s=="not"||s=="that"||s=="the"||s=="you"){
            cout<<"Yes\n";
            return 0;
        }
    }
    cout<<"No\n";
    return 0;
}
