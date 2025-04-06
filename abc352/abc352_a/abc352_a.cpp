#include <iostream>
using namespace std;
int main(){
  int x, y, t;
  cin >> x >> x >> y >> t;
  if (x > y) swap(x, y);
  cout << (x <= t && t <= y ? "Yes\n" : "No\n");
}