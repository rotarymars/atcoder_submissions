#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

signed main(){
    ll n;cin>>n;
    const ll len=60;
    auto a=bitset<len>(n);
    string ans(len,'B');
    for(ll i=len-1;i>=0;i--){
        if(a[i]==1){
            ans.insert(ans.size()-i,"A");
        }
    }
    cout<<ans<<endl;
    return 0;
}
