#include<bits/stdc++.h>
using namespace std;
int main(){
  int n;
  cin >> n;
  vector<long long> a(n);
  vector<int> s(n - 1), t (n - 1);
  for(int i = 0; i < n; i++)cin >> a[i];
  for(int i = 0; i < n - 1; i++)cin >> s[i] >> t[i];
  for(int i = 0; i < n - 1; i++){
      long long b = a[i] / s[i];
      a[i + 1] = a[i + 1] + b * t[i];
    }
  cout << a[n - 1] << "\n";
}

