#include <string>
#include <algorithm>
#include <vector>
#include <iostream>
using namespace std;
int main(){
  string s;
  int n;
  cin >> n >> s;
  vector<int> string(n);
  for(int i = 0; i < n; ++i){
    string[i] = s[i];
  }
  
  int j, o, i;
  j = count(string.begin(), string.end(), 'J');
  o = count(string.begin(), string.end(), 'O');
  i = count(string.begin(), string.end(), 'I');
  for(int m = 0; m < j; ++m){
    cout << 'J';
  }
  for(int m = 0; m < o; ++m){
    cout << 'O';
  }
  for(int m = 0; m < i; ++m){
    cout << 'I';
  }
}