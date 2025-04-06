#include <string>
#include <iostream>
using namespace std;
int main(){
  int n, count = 0;
  cin >> n;
  string s;
  cin >> s;
  for(int i = 0; i < n; ++i){
    if(s[i] == 'a' || s[i] == 'i' || s[i] == 'u' || s[i] == 'e' || s[i] == 'o'){
      ++count;
    }
  }
  cout << count << endl;
  return 0;
}