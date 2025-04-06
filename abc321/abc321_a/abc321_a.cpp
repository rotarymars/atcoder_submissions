#include <algorithm>
#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
    cin.tie(nullptr);
    ios_base::sync_with_stdio(false);

    // write code here
    int n, length, m, x = 0, out = 0;
    string str_n;
    cin >> n;
    str_n = to_string(n);
    length = str_n.size();
    m = str_n[0];
    if (length == 1) {
        cout << "Yes" << endl;
        out = 1;
    }
    else {
        for (size_t i = 1; i < length; ++i)
        {
            if ((int)str_n[i] < m) {
                m = str_n[i];
            }
            else {
                x = 1;
                cout << "No" << endl;
                out = 1;
                break;
            }
        }
    }
    if (out == 0) {
        cout << "Yes" << endl;
    }
    return 0;
}