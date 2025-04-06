#include <iostream>
using namespace std;
int f(int n){
  if(n==1)return 1;
  else return f(n-1)+n;
}
int main(){
  int a,b;
  cin>>a>>b;
  int temp=b-a;
  cout<<f(temp-1)-a<<endl;
}