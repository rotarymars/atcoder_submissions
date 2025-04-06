#include <iostream>
#include <vector>
using namespace std;

int main(){
  int N;
  cin >> N;
  vector <int> A(2 * N - 1, 0);
  for(int& a : A){
    cin >> a;
  }
  for(int x = 1; x <= N; ++x){
    int count = 0;
    for(int a: A){
      if(x == a){
        ++count;
      }
    }
    if(count == 1){
      cout << x << endl;
    }
  }
}