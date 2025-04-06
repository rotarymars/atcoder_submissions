#include<bits/stdc++.h>
using namespace std;
int main(){
  vector<pair<string, int>> table;
  table.push_back({"tourist", 3858});
  table.push_back({"ksun48", 3679});
  table.push_back({"Benq", 3658});
  table.push_back({"Um_nik", 3648});
  table.push_back({"apiad", 3638});
  table.push_back({"Stonefeang", 3630});
  table.push_back({"ecnerwala", 3613});
  table.push_back({"mnbvmar", 3555});
  table.push_back({"newbiedmy", 3516});
  table.push_back({"semiexp", 3481});
  string s;
  cin >> s;
  for(int i = 0; i < 10; i++){
    if(s == table[i].first){
      cout << table[i].second;
    }
  }
}