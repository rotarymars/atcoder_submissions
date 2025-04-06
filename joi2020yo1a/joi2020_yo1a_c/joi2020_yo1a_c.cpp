#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
  int n, m;
  cin >> n >> m;
  vector<int> a(n + m);
  for (int &i : a) cin >> i;
  sort(a.begin(), a.end());
  for (int &i : a) cout << i << "\n";
}