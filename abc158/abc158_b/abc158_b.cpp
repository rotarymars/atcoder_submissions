#include <iostream>
#ifndef __ROTARYMARS__TYPE__
#define __ROTARYMARS__TYPE__
#include <stdint.h>
using I = int32_t;
using UI = uint32_t;
using LL = int64_t;
using ULL = uint64_t;
#else
#endif
using namespace std;
signed main() {
  cin.tie(nullptr);
  ios_base::sync_with_stdio(false);
  LL n, a, b;
  cin >> n >> a >> b;
  if (a + b == 0) {
    cout << 0 << endl;
    return 0;
  }
  LL k = n / (a + b);
  LL tmp = n % (a + b);
  LL add = 0;
  if (tmp > a)
    add = a;
  else
    add = tmp;
  cout << k * a + add << endl;
  return 0;
}

/*
                          ./+o+-
                  yyyyy- -yyyyyy+
               ://+//////-yyyyyyo
           .++ .:/++++++/-.+sss/`
         .:++o:  /++++++++/:--:/-
        o:+o+:++.`..```.-/oo+++++/
       .:+o:+o/.          `+sssoo+/
  .++/+:+oo+o:`             /sssooo.
 /+++//+:`oo+o               /::--:.
 \+/+o+++`o++o               ++////.
  .++.o+++oo+:`             /dddhhh.
       .+.o+oo:.          `oddhhhh+
        \+.++o+o``-````.:ohdhhhhh+
         `:o+++ `ohhhhhhhhyo++os:
           .o:`.syhhhhhhh/.oo++o`
               /osyyyyyyo++ooo+++/
                   ````` +oo+++o\:
                          `oo++.
*/
