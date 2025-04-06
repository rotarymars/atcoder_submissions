#include <iostream>
using namespace std;
bool ISUPPER(char a)
{
    if (a >= 'A' && a <= 'Z')
    {
        return true;
    }
    return false;
}
bool ISLOWER(char a)
{
    if (a >= 'a' && a <= 'z')
    {
        return true;
    }
    return false;
}
char TOUPPER(char a)
{
    return (char)(a - 32);
}
char TOLOWER(char a)
{
    return (char)(a + 32);
}
signed main()
{
    cin.tie(nullptr);
    ios_base::sync_with_stdio(false);
    char a;
    cin>>a;
    if(ISUPPER(a))cout<<"A"<<endl;
    else cout<<"a"<<endl;
    return 0;
}
