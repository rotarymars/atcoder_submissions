#include <iostream>
#include <vector>
using namespace std;
int main(){
  int n;
  cin >> n;
  vector<int> t(n);
  long long sum = 0;
  for (auto &i : t){
    cin >> i;
    sum += i;
  }
  int m;
  cin >> m;
  while (m--){
    int p, x;
    cin >> p >> x;
    cout << sum - t[--p] + x << "\n";
  }
}