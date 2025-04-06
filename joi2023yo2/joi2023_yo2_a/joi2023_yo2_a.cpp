#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;
int main(){
  int N, max, min;
  cin >> N;
  vector<int> A(N);
  for(int i = 0; i < N; ++i){
    cin >> A[i];
  }
  max = *max_element(A.begin(), A.end());
  min = *min_element(A.begin(), A.end());
  for(int i = 0; i < N; ++i){
    if(abs(A[i] - max) > abs(A[i] - min)){
      cout << abs(A[i] - max) << "\n";
    }else{
      cout << abs(A[i] - min) << "\n";
    }
  }
}