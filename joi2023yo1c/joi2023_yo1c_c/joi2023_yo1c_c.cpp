#include <iostream>
using namespace std;
int main(){
  int n;
  string s;
  cin >> n >> s;
  for (int i = 0; i < n - 1; i++){
    if (s[i] == s[i + 1]){
      s[i] = s[i] - ('a' - 'A');
      s[i + 1] = s[i + 1] - ('a' - 'A');
    }
  }
  cout << s << endl;
}