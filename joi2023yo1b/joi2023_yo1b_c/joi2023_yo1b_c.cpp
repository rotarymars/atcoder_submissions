#include <iostream>
#include <string>
using namespace std;

int main()
{
    cin.tie(nullptr);
    ios_base::sync_with_stdio(false);

    // write code here
    int N;
    cin >> N;
    N /= 2;
    string S;
    cin >> S;
    if (S.substr(0, N) == S.substr(N)) {
        cout << "Yes" << endl;
    }
    else {
        cout << "No" << endl;
    }
    return 0;
}