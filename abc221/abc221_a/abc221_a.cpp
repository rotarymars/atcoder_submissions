#include <iostream>
#include <limits.h>
using namespace std;
template <class T>
T POWMOD(T a, T b, T c)
{
    T ans = 1;
    a %= c;
    while (b != 0)
    {
        if (b & 1)
        {
            ans *= a;
        }
        a *= a;
        b >>= 1;
        a %= c;
        ans %= c;
    }
    return ans;
}
signed main()
{
    cin.tie(nullptr);
    ios_base::sync_with_stdio(false);
    int a,b;
    cin>>a>>b;
    cout<<POWMOD(32,a-b,INT_MAX)<<endl;;
    return 0;
}
