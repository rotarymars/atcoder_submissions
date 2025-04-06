#include <iostream>
#include <vector>
#include <climits>
using namespace std;
int main(){
  int n;
  cin >> n;
  vector<int> a(n);
  int mymax = 0, mymin = INT_MAX;
  for (auto &i : a){
    cin >> i;
    mymax = max(mymax, i), mymin= min(mymin, i);
  }
  for (auto &i : a){
    cout << max(abs(i - mymax), abs(i - mymin)) << "\n";
  }
}