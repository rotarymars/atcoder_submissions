#include <iostream>
#include <string>
using namespace std;
signed main(){
	cin.tie(nullptr);
	ios_base::sync_with_stdio(false);
	string s;
	cin>>s;
	cout<<s.substr(0,s.size()-4)<<"2015"<<endl;
	return 0;
}
