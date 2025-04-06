#include<bits/stdc++.h>
using namespace std;

long long multiply(long long a, long long b){
  long long ans = 1;
  for(long long i = 0; i < b; i++){
    ans *= 10;
  }
  return ans;
}

int main(){
  long int N;
  cin >> N;
  long long X = 0;
  N--;
  for(int i = 0; i < 19; i++){
   X = X + multiply(1, i) * (N % 5);
   N /= 5;
  }
  cout << X * 2 << "\n";
}