#include <iostream>
#include <vector>
using namespace std;
int main() {
  int n, h, x;
  cin >> n >> h >> x;
  vector<int> p(n);
  for (int &i : p) cin >> i;
  cout << 1 + distance(p.begin(), lower_bound(p.begin(), p.end(), x - h)) << endl;
}