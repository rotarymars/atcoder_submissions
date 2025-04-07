#include<bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int n,m; cin >> n >> m;
    int h[n]; for (int i = 0 ; i< n; ++i) cin >> h[i];
    vector<vector<int>>adj(n);
    for (int i = 0; i < m ;++i) {
        int a,b; cin >> a >> b;
        --a,--b;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }
    long long ans = 0;
    for (int i = 0 ;i < n; ++i) {
        bool f = true;
        for (auto &j : adj[i]) {
            if (h[i] <= h[j]) {
                f = false;
                break;
            }
        }
        if (f) ans++;
    }
    cout << ans << endl;
}
