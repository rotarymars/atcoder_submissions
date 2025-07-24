#include <bits/stdc++.h>
using namespace std; using ll = long long; const int mmb = 2e5+3;
int n,a[mmb],b[mmb],x[mmb],inf = 1e8;
void kid()
{ 
	cin >> n;
	if(n == 1) { cout << 1 << '\n';cout << 1;}
	else {
		cout << n/2 << '\n';
		for(int i=2;i<=n;i+=2) cout << i << ' ';
	}
}
void KID()
{
	
}

int32_t main(){
	ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	//freopen(".INP" , "r" , stdin);
	//freopen(".OUT" , "w" , stdout);
	int t=1;//cin >> t;
	while(t--) kid();
	KID();
	return 0;
}