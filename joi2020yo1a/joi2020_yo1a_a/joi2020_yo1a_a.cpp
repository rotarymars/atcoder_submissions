#include <iostream>
#include <vector>
using namespace std;
int main(){
  vector<int> a(2);
  for (int i = 0; i < 3; i++) {
    int tmp;
    cin >> tmp;
    a[--tmp]++;
  }
  if (a[0] > a[1]) cout << "1\n";
  else cout << "2\n";
}