#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
signed main()
{
    cin.tie(nullptr);
    ios_base::sync_with_stdio(false);
    string s;
    cin>>s;
    vector<string>v{"Monday"s,"Tuesday"s,"Wednesday"s,"Thursday"s,"Friday"s,"Saturday"s};
    cout<<distance(find(v.begin(),v.end(),s),find(v.begin(),v.end(),"Saturday"s))<<endl;
    return 0;
}
