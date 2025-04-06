#include <stdio.h>
#include <string>
using namespace std;
int main(){
  int x = 0;
  char nowchar;
  while ((nowchar = getchar()) != '\n'){
    x *= 10;
    x += (nowchar - '0');
  }
  x %= 21;
  string mys = to_string(x);
  for (int i = 0; i < mys.size(); i++){
    putchar(mys[i]);
  }
}