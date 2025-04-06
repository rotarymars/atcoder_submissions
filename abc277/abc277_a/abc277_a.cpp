#include <iostream>
using namespace std;
signed main()
{
    cin.tie(nullptr);
    ios_base::sync_with_stdio(false);
    int n,k;
    cin>>n>>k;
    for(int i=0;i<n;i++){
        int tmp;
        cin>>tmp;
        if(tmp==k){
            cout<<i+1<<endl;
            return 0;
        }
    }
    return 0;
}
