#include <iostream>
#include <string>
#include <regex>
using namespace std;
int main(){
  string s;
  cin>>s;
  if(regex_match(s,regex(".*C.*F.*")))cout<<"Yes"<<endl;
  else cout<<"No"<<endl;
}