#include <bits/stdc++.h>
using namespace std;
int main(){
  int n, m, l;
  cin >> n;
  set<int> a;
  while (n--){
    int tmp;
    cin >> tmp;
    a.insert(tmp);
  }
  cin >> m;
  set<int> b;
  while (m--){
    int tmp;
    cin >> tmp;
    b.insert(tmp);
  }
  cin >> l;
  set<int> c;
  while (l--){
    int tmp;
    cin >> tmp;
    c.insert(tmp);
  }
  set<long long> ans;
  for (auto i = a.begin(); i != a.end(); i++){
    for (auto j = b.begin(); j != b.end(); j++){
      for (auto k = c.begin(); k != c.end(); k++){
        ans.insert(*i + *j + *k);
      }
    }
  }
  int q;
  cin >> q;
  while (q--){
    int tmp;
    cin >> tmp;
    if (ans.contains(tmp)){
      cout << "Yes\n";
    }else cout << "No\n";
  }
}