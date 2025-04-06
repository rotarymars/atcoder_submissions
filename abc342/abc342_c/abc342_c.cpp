#include <iostream>
using namespace std;
int main(){
  int n, q;
  string s;
  cin >> n >> s >> q;
  string first = "abcdefghijklmnopqrstuvwxyz", result = first;
  while(q--){
    char c, d;
    cin >> c >> d;
    for (auto &i : result){
      if (i == c){
        i = d;
      }
    }
  }
  for (auto &i : s){
    cout << result[i - 'a'];
  }
  cout << endl;
}