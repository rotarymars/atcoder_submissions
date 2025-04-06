#include <bits/stdc++.h>
using namespace std;
int main(){
  int n, p, q;
  cin >> n >> p >> q;
  int ansd = 1e9;
  for(int i = 0; i < n; i++){
    int d;
    cin >> d;
    ansd = min(d, ansd);
  }
  cout << min(ansd + q, p);
  return 0;
}