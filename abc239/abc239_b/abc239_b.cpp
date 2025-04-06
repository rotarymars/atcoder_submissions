#include <iostream>
#ifndef __ROTARYMARS__RUD__
#define __ROTARYMARS__RUD__
template<class T>
T RUD(T a, T b) {
  return ((a + b - (T)1) / b);
}
#else
#endif
#include <string>
using namespace std;
signed main(){
	cin.tie(nullptr);
	ios_base::sync_with_stdio(false);
	long long n;
	cin>>n;
	if(n<0)cout<<-RUD(-n,10ll)<<endl;
	else cout<<n/10<<endl;
	return 0;
}
