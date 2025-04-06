#include <bits/stdc++.h>
using namespace std;

int main(){
  int h, w;
  cin >> h >> w;
  vector<string> a(h);
  vector<string> b(h);
  for(string &c : a){
    cin >> c;
  }
  for(string &c : b){
    cin >> c;
  }
  for(size_t s = 0; s < h; s++){
    for(size_t t = 0; t < w; t++){
      bool ok = true;
      for(size_t i = 0; i < h; i++){
        for(size_t j = 0; j < w && ok; j++){
          if(a[(i - s + h) % h][(j - t + w) % w] != b[i][j]){
            ok = false;
          }
        }
      }
      if(ok){
        cout << "Yes\n";
        return 0;
      }
    }
  }
  cout << "No\n";
}