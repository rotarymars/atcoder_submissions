#include <stdio.h>
int main() {
  char tmp;
  int a = 0;
  constexpr char* b = "3.1415926535897932384626433832795028841971693993751058209749445923078164062862089986280348253421170679";
  while ((tmp = getchar()) != '\n') a *= 10, a += (tmp - '0');
  putchar('3'); putchar('.');
  for (int i = 2; i < a + 2; i++) putchar(b[i]);
}