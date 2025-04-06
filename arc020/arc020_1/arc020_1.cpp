#include <cstdlib>
#include <iostream>
using namespace std;
signed main(){
	cin.tie(nullptr);
	ios_base::sync_with_stdio(false);
	int a,b;
	cin>>a>>b;
	a=abs(a),b=abs(b);
	if(a<b)cout<<"Ant"<<endl;
	else if(a>b)cout<<"Bug"<<endl;
	else cout<<"Draw"<<endl;
	return 0;
}
