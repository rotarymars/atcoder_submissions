#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define all(x) (x).begin(), (x).end()
using ll = long long;

int main() {
    int n;
    cin >> n;
    vector<int> h(n);
    rep(i, n) cin >> h[i];
    int cnt = 0;
    int max_cnt = 0;
    for (int i = 0; i < n - 1; i++) {
        if (h[i + 1] <= h[i]) {
            cnt++;
            max_cnt = max(max_cnt, cnt);
        } else {
            // max_cnt = max(max_cnt, cnt);
            cnt = 0;
        }
    }
    cout << max_cnt << endl;
    return 0;
}