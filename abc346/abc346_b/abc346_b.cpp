#include <iostream>
#include <algorithm>
using namespace std;
signed main()
{
    cin.tie(nullptr);
    ios_base::sync_with_stdio(false);
    int w,b;
    cin>>w>>b;
    string s="wbwbwwbwbwbw";
    string piano="";
    for (int i=0;i<100;i++)piano+=s;
    for(int i=0;i<piano.size();i++)for(int j=0;j<piano.size()-i;j++){
        string tmp=piano.substr(i,j);
        if (count(tmp.begin(),tmp.end(),'w')==w&&count(tmp.begin(),tmp.end(),'b')==b){
            cout<<"Yes\n";
            return 0;
        }
    }
    cout<<"No\n";
    return 0;
}
