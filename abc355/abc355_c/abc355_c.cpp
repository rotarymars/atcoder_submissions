#include <iostream>
#include <vector>
using namespace std;
bool f(vector<int> &v, int n)
{
    for (int &i : v)
    {
        if (i == n)
            return true;
    }
    return false;
}
bool g(vector<vector<bool>> &v)
{
    for (int i = 0; i < v.size(); i++)
    {
        if (!v[i][i])
            return false;
    }
    return true;
}
bool h(vector<vector<bool>> &v)
{
    for (int i = 0; i < v.size(); i++)
    {
        if (!v[i][v.size() - i - 1])
            return false;
    }
    return true;
}
signed main()
{
    cin.tie(nullptr);
    ios_base::sync_with_stdio(false);
    int n, t;
    cin >> n >> t;
    vector<int> vertical(n, 0), horizontal(n, 0);
    vector<vector<bool>> grid(n, vector<bool>(n, false));
    for (int i = 0; i < t; i++)
    {
        int tmp;
        cin >> tmp;
        tmp--;
        auto cor = move(make_pair(tmp / n, tmp % n));
        vertical[cor.first]++;
        horizontal[cor.second]++;
        grid[cor.first][cor.second] = true;
        if (f(vertical, n) || f(horizontal, n))
        {
            cout << i + 1 << endl;
            return 0;
        }
        if (g(grid) || h(grid))
        {
            cout << i+1 << endl;
            //cout << g(grid) << endl;
            //cout << h(grid) << endl;
            return 0;
        }
        // for (auto j : grid)
        // {
        //     for (auto k : j)
        //         cout << k;
        //     cout << endl;
        // }
    }
    cout << -1 << endl;
    return 0;
}
