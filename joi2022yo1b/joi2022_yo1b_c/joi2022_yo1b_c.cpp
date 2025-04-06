#include <stdio.h>
using namespace std;
int main(){
  int n = 0;
  char nowchar;
  while ((nowchar = getchar()) != '\n'){
    n *= 10;
    n += (nowchar - '0');
  }
  char backchar = getchar();
  for (int i = 0; i < n - 1; i++){
    nowchar = getchar();
    if (nowchar == 'J'){
      putchar(backchar);
      putchar('\n');
    }
    backchar = nowchar;
  }
}