#include <iostream>
using namespace std;
int main(){
  int N, a, m = 0;
  cin >> N;
  for (int i = 0; i < 2 * N - 1; ++i){
    cin >> a;
    m ^= a;
  }
  cout << m << "\n";
}