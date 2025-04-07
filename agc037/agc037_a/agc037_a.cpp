#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    string s; cin >> s;
    string lst = "";
    string now = "";
    int ans = 0;
    for (int i = 0; i < s.length(); i++) {
        now+=s[i];
        if (lst != now) {
            lst = now;
            now = "";
            ans++;
        }
    }
    // for (string str : S) cout << str << '\n';
    cout << ans << '\n';
    
    return 0;
}
