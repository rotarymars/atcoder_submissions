#include <iostream>
#include <string>
#include <vector>
using namespace std;
int main(){
  int n;
  string s;
  cin >> n >> s;
  vector <char> s_1(s.begin(), s.end());
  for(int i = 0; i < n - 1; ++i){
    if(s_1[i] + s_1[i + 1] == 'j' + 'j'){
      s_1[i] = 'J';
      s_1[i + 1] = 'J';
    }else if(s_1[i] + s_1[i + 1] == 'o' + 'o'){
      s_1[i] = 'O';
      s_1[i + 1] = 'O';
    }else if(s_1[i] + s_1[i + 1] == 'i' + 'i'){
      s_1[i] = 'I';
      s_1[i + 1] = 'I';
    }
  }
  for(int i = 0; i < n; ++i){
    cout << s_1[i];
  }
}