#include <iostream>
#include <string>
using namespace std;

int main()
{
    cin.tie(nullptr);
    ios_base::sync_with_stdio(false);

    // write code here
    int n, count = 0, x = 1;
    string s;
    cin >> n >> s;
    for(int i = 0; i < n; ++i) {
        if(s[i] == 'L') {
            if (x != 1) {
                --x;
            }
        }
        else {
            if (x != 3) {
                ++x;
            }
        }
        if (x == 3) {
            ++count;
        }
    }
    cout << count << endl;
    return 0;
}
