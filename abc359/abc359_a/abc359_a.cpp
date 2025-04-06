#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main() {
  string s="";
  int n;
  cin>>n;
  for(;n;n--){
    string tmp;
    cin>>tmp;
    s+=tmp;
  }
  cout<<count(s.begin(),s.end(),'T')<<endl;
}