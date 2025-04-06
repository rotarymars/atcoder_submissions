#include <bits/stdc++.h>
#include <atcoder/dsu>
using namespace std;int main(){int n,q;cin>>n>>q;atcoder::dsu d(n);for(int i=0;i<q;i++){static int t;cin>>t;if(t==0){static int u,v;cin>>u>>v;d.merge(u,v);}else{static int u,v;cin>>u>>v;if(d.same(u,v)){cout<<"1\n";}else{cout<<"0\n";}}}}