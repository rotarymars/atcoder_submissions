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
    int n;
    cin >> n;
    vector<vector<char>> first_poster(n, vector<char>(n));
    vector<vector<char>> ans_poster(n, vector<char>(n));
    for (size_t i = 0; i < n; ++i)
    {
      string memory;
      cin >> memory;
      for (size_t j = 0; j < n; ++j)
      {
        first_poster[i][j] = memory[j];
      }
    }
    for (size_t i = 0; i < n; ++i)
    {
      string memory;
      cin >> memory;
      for (size_t j = 0; j < n; ++j)
      {
        ans_poster[i][j] = memory[j];
      }
    }
    vector<vector<char>> one_clockwize_poster(n, vector<char>(n));
    vector<vector<char>> two_clockwize_poster(n, vector<char>(n));
    vector<vector<char>> one_anticlockwize_poster(n, vector<char>(n));
    for (int i = 1; i <= n; ++i) {
      for (int j = 1; j <= n; ++j) {
        one_clockwize_poster[(j) - 1][(n - i + 1) - 1] = first_poster[(i) - 1][(j) - 1];
        two_clockwize_poster[(n - i + 1) - 1][(n - j + 1) - 1] = first_poster[(i) - 1][(j) - 1];
        one_anticlockwize_poster[(n - j + 1) - 1][(i) - 1] = first_poster[(i) - 1][(j) - 1];
      }
    }
    int one_clockwize_poster_nonsame = 0, two_clockwize_poster_nonsame = 0, one_anticlockwize_poster_nonsame = 0, no_turn_poster_nonsame = 0;
    for (int i = 0; i < n; ++i) {
      for (int j = 0; j < n; ++j) {
        if (ans_poster[i][j] != one_clockwize_poster[i][j]) {
          ++one_clockwize_poster_nonsame;
        }
        if (ans_poster[i][j] != two_clockwize_poster[i][j]) {
          ++two_clockwize_poster_nonsame;
        }
        if (ans_poster[i][j] != one_anticlockwize_poster[i][j]) {
          ++one_anticlockwize_poster_nonsame;
        }
        if (ans_poster[i][j] != first_poster[i][j]) {
          ++no_turn_poster_nonsame;
        }
      }
    }
    int count = 0;
    if (no_turn_poster_nonsame <= one_clockwize_poster_nonsame && no_turn_poster_nonsame <= two_clockwize_poster_nonsame && no_turn_poster_nonsame <= one_anticlockwize_poster_nonsame) {
      cout << no_turn_poster_nonsame << "\n";
      ++count;
    }
    else if (one_clockwize_poster_nonsame <= two_clockwize_poster_nonsame && one_clockwize_poster_nonsame <= one_anticlockwize_poster_nonsame && count == 0) {
      cout << 1 + one_clockwize_poster_nonsame << "\n";
      ++count;
    }
    else if (one_anticlockwize_poster_nonsame <= one_clockwize_poster_nonsame && one_anticlockwize_poster_nonsame <= two_clockwize_poster_nonsame && count == 0) {
      cout << 1 + one_anticlockwize_poster_nonsame << "\n";
      ++count;
    }
    else if (two_clockwize_poster_nonsame <= one_clockwize_poster_nonsame && two_clockwize_poster_nonsame <= one_anticlockwize_poster_nonsame && count == 0) {
      cout << 2 + two_clockwize_poster_nonsame << "\n";
      ++count;
    }
    return 0;
}
