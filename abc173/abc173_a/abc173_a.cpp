#include <iostream>
using namespace std;
template <class T>
T RUD(T a, T b)
{
    return ((a + b - (T)1) / b);
}
signed main()
{
    cin.tie(nullptr);
    ios_base::sync_with_stdio(false);
    int n;
    cin>>n;
    cout<<RUD(n,1000)*1000-n<<endl;
    return 0;
}
