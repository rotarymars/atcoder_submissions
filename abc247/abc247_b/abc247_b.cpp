#include <iostream>
#include <string>
#include <map>
#include <vector>
using namespace std;
int main(){
    int n; cin >> n;
    vector<string> s(n), t(n);
    map<string, int> m;
    for (int i=0;i<n;i++){
        cin >> s[i] >> t[i];
        m[s[i]]++;
        m[t[i]]++;
    }
    for (int i=0;i<n;i++){
        if (1<m[s[i]] && 1<m[t[i]] && s[i] != t[i]){
            cout << "No\n";
            return 0;
        }
    }
    cout << "Yes\n";
    return 0;
}