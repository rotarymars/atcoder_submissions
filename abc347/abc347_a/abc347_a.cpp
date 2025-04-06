#include <iostream>
#include <vector>
using namespace std;
signed main()
{
    cin.tie(nullptr);
    ios_base::sync_with_stdio(false);
    int n,k;
    cin>>n>>k;
    bool first=true;
    for(int i=0;i<n;i++){
        int tmp;
        cin>>tmp;
        if(!(tmp%k)){
            if(first){
                cout<<tmp/k;
                first=!first;
            }else cout<<' '<<tmp/k;
        }
    }
    cout<<endl;
    return 0;
}
