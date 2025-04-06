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
  if (x >= 10){
    putchar(x / 10 + '0');
    putchar(x % 10 + '0');
  }else {
    putchar(x + '0');
  }
}