#include<iostream>
using namespace std;using A=long long;A n,rs,pt=1;int main(){cin>>n;n--;while(n)rs+=pt*(n%5)*2,n/=5,pt*=10;cout<<rs;}