#include <iostream>
#include <queue>
#include <algorithm>
#include <vector>
#include <deque>
using namespace std;
signed main(){
    long long q; cin >> q;
    deque<pair<long long, long long>> que;
    for (;q;q--){
        long long mode;
        cin >> mode;
        if (mode == 1){
            long long x, c;
            cin >> x >> c;
            que.emplace_back(make_pair(x,c));
        }else {
            long long c;
            cin >> c;
            long long ans=0;
            while (c > 0) {
                pair<long long, long long> a=que.front();
                que.pop_front();
                if (a.second > c){
                    ans += a.first * c;
                    a.second-=c;
                    c=0;
                    que.push_front(a);
                }else{
                    ans += a.second * a.first;
                    c-=a.second;
                }
            }
            cout << ans << "\n";
        }
    }
    return 0;
}
