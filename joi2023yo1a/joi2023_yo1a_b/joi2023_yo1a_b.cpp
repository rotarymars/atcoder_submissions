#include <iostream>

using namespace std;

int main()
{
    cin.tie(nullptr);
    ios_base::sync_with_stdio(false);

    // write code here
    int n;
    cin >> n;
    if (n / 10 == n % 10) {
        cout << 1 << endl;
    }
    else {
        cout << 0 << endl;
    }
    return 0;
}
