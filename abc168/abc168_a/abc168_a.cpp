#include <iostream>
using namespace std;
signed main()
{
    cin.tie(nullptr);
    ios_base::sync_with_stdio(false);
    string s;
    cin>>s;
    int n=stoi(s.substr(s.size()-1,1));
    if(n==2||n==4||n==5||n==7||n==9) cout<<"hon\n";
    else if(n==0||n==1||n==6||n==8)cout<<"pon\n";
    else cout<<"bon\n";
    return 0;
}
