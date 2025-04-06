#include <iostream>
#include <stack>
#include <string>
using namespace std;
int main(){
  int n;
  cin >> n;
  stack<string> a;
  while (n--){
    string s;
    cin >> s;
    if (s == "READ"){
      cout << a.top() << "\n";
      a.pop();
    }else a.push(s);
  }
}