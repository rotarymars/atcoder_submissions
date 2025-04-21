#include <iostream>
#include <queue>
using namespace std;
signed main() {
  cin.tie(nullptr);
  ios::sync_with_stdio(false);
  int q;
  cin>>q;
  queue<int>que;
  while(q--){
    int t;
    cin>>t;
    if(t==1){
      int x;
      cin>>x;
      que.push(x);
    }
    else{
      cout<<que.front()<<endl;
      que.pop();
    }
  }
  return 0;
}