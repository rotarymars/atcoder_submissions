#include <algorithm>
#include <iostream>
#include <string>
#include <vector>

using namespace std;
typedef long long ll;

int main()
{
    cin.tie(nullptr);
    ios_base::sync_with_stdio(false);

    // write code here
    int N, A_1, max, min, x, y, m;
    //ll A_1, m, x = 0, t;
    cin >> N;
    vector<int> A;
    A.reserve(N);
    for (size_t i = 0; i < N; ++i)
    {
        cin >> A_1;
        A.push_back(A_1);
    }
    max = *max_element(A.begin(), A.end());
    min = *min_element(A.begin(), A.end());
    for (size_t i = 0; i < N; ++i)
    {
        x = abs(A[i] - max);
        y = abs(A[i] - min);
        if (x > y) {
            m = x;
        }
        else {
            m = y;
        }
        cout << m << "\n";
    }
    return 0;
}
