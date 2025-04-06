#include <iostream>
#ifndef __ROTARYMARS__ARYSYSTEM__
#define __ROTARYMARS__ARYSYSTEM__
#include <vector>
#include <algorithm>
std::vector<int> CHANGEARYSYSTEM(int n, int k){
    std::vector<int>ret;
    while(n>0){
        ret.push_back(n%k);
        n/=k;
    }
    reverse(ret.begin(),ret.end());
    return ret;
}
#else
#endif
using namespace std;
signed main()
{
    cin.tie(nullptr);
    ios_base::sync_with_stdio(false);
    int n,k;
    cin>>n>>k;
    cout<<CHANGEARYSYSTEM(n,k).size()<<endl;
    return 0;
}
