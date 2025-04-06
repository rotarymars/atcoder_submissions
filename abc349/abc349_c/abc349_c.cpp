#include<bits/stdc++.h>
using namespace std;
int main(){
 string s, t;
 cin >> s >> t;
 int a = s.size();
 string ans = "No";
 int b = 0, p = 0;
 string d = s;
 for(int i = 0; i < 3; i++){
   t[i] = t[i] + 'a' - 'A';
   for(int j = p; j < a; j++){
     if(d[j] == t[i]){
       b++;
       d.erase(j, 1);
       a--;
       p = j;
       break;
     }
   }
 } 
 if(b == 3)ans = "Yes";
  int e = s.size();
 if(t[2] == 'x'){
   int c = 0, q = 0;
 for(int i = 0; i < 2; i++){
   for(int j = q; j < e; j++){
     if(s[j] == t[i]){
       c++;
       s.erase(j, 1);
       e--;
       q = j;
       break;
     }
   }
 }
 if(c == 2)ans = "Yes";
 }
 cout << ans << "\n";
}