#include <iostream>
using namespace std;
int i(){
	int a;
	cin>>a;
	return a;
}
signed main(){
	cin.tie(nullptr);
	ios_base::sync_with_stdio(false);
	cout<<max(i(),i())<<endl;
	return 0;
}
