#include <iostream>
int main(){
  int x, y;
  std::cin >> x >> y;
  std::cout << x + y + 3 << "\n";
  for(int i = 0; i < 999999; ++i){
    std::cerr << "A";
  }
}