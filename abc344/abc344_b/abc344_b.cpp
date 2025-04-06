#include <iostream>
#include <vector>
using namespace std;
int main(){
  vector<int> a;
  while (true){
    int tmp;
    cin >> tmp;
    a.push_back(tmp);
    if (tmp == 0) goto END;
  }
  END:
  for (auto i = a.rbegin(); i != a.rend(); i++){
    cout << *i << "\n";
  }
}