#include <iostream>
#include <vector>
#include <set>
using namespace std;
int main() {
    set<int>callinglist;
    int n,q;
    cin>>n>>q;
    int ind=0;
    for(;q;q--){
        int t;
        cin>>t;
        if(t==1)callinglist.insert(++ind);
        else if(t==2) {
            int x;
            cin>>x;
            callinglist.erase(x);
        }else if(t==3){
            cout<<*callinglist.begin()<<"\n";
        }
    }
    return 0;
}