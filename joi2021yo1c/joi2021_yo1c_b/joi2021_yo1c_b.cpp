#include <vector>
#include <string>
#include <iostream>
using namespace std;
int main(){
  int n, count = 0;
  string s;
  cin >> n >> s;
  vector<char> correct(n);
  vector<char> in(n);
  for(int i = 0; i < n; ++i){
    in[i] = s[i];
    if(i % 2 == 0){
      correct[i] = 'I';
    }else{
      correct[i] = 'O';
    }
  }
  for(int i = 0; i < n; ++i){
    if(correct[i] != in[i]){
      ++count;
    }
  }
  cout << count << "\n";
  return 0;
}