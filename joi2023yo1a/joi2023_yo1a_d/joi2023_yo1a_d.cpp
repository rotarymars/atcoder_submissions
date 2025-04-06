#include <iostream>
using namespace std;
int main(){
  int N, m = 0, a;
  cin >> N;
  for (int i = 0; i < 2 * N - 1; ++i){
    cin >> a;
    m = m + a;
  }
  cout << (1 + N) * N - m << "\n";
}