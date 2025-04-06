#include <iostream>
#include <vector>
#include <string>
using namespace std;
int main(){
  int h,w;
  cin>>h>>w;
  vector<string>v(h);
  for(string&i:v)cin>>i;
  vector gh{-1,-1,0,1,1,1,0,-1},gw{0,1,1,1,0,-1,-1,-1};
  vector<vector<char>>ans(h,vector<char>(w));
  for(int i=0;i<h;i++)for(int j=0;j<w;j++){
    if(v[i][j]=='#')ans[i][j]='#';
    else{
      int ansint=0;
      for(int k=0;k<8;k++){
        if(i+gh[k]>=0&&i+gh[k]<h&&j+gw[k]>=0&&j+gw[k]<w)if(v[i+gh[k]][j+gw[k]]=='#')++ansint;
      }
      ans[i][j]='0'+ansint;
    }
  }
  for(int i=0;i<h;i++){
    for(int j=0;j<w;j++)cout<<ans[i][j];
    cout<<'\n';
  }
}