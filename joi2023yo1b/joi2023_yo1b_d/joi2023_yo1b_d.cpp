#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    cin.tie(nullptr);
    ios_base::sync_with_stdio(false);

    // write code here
    int N, M, c;
    cin >> N;
    vector <int> A(N, 0);
    for (int i = 0; i < N; ++i) {
        cin >> c;

        A[i] = c;
    }
    cin >> M;
    vector <int> B(M, 0);
    for (int i = 0; i < M; ++i) {
        cin >> c;
        B[i] = c;
    }
    c = 0;
    for (int i = 0; i < N; ++i) {
        c += A[i];
        if (count(B.begin(), B.end(), c)) {
            c = 0;
        }
    }
    cout << c << "\n";
    return 0;
}