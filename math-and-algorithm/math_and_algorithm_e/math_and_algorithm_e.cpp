#include <iostream>
using namespace std;
int main(){
  int n, memory = 0;
  cin >> n;
  int a[n];
  for(int i = 0; i < n; ++i){
    cin >> a[i];
  }
  for(int i = 0; i < n; ++i){
    memory += a[i];
  }
  cout << memory % 100 << "\n";
}