#include <iostream>
using namespace std;
signed main()
{
    cin.tie(nullptr);
    ios_base::sync_with_stdio(false);
    long long a, b, c;
    cin >> a >> b >> c;
    long long x=2*b-a-c;
    long long k = (x>=0?0:(1 - x)/2);
    long long ans = x + 3 * k;
    cout<<ans<<endl;
    return 0;
}
