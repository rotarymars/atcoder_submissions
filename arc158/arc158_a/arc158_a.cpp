#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>
using namespace std;
long long solve(long long a,long long b,long long c){
    vector<long long>v{a,b,c};
    sort(v.begin(),v.end());
    v[2]-=v[0];
    v[1]-=v[0];
    v[0]=0;
    if(accumulate(v.begin(),v.end(),0ll)%3!=0)return -1;
    if(v[1]%2!=0||v[2]%2!=0)return -1;
    long long s=accumulate(v.begin(),v.end(),0ll)/3;
    return (abs(v[0]-s)/2+abs(v[1]-s)/2+abs(v[2]-s)/2)/2;
}
signed main()
{
    cin.tie(nullptr);
    ios_base::sync_with_stdio(false);
    long long t;
    cin>>t;
    for(;t;t--){
        long long a,b,c;
        cin>>a>>b>>c;
        cout<<solve(a,b,c)<<"\n";
    }
    return 0;
}
