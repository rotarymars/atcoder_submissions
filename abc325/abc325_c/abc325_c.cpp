#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
#include <atcoder/dsu>

using namespace std;

int pt2num(const int x, const int y, const int w) { return (x * w) + y; }
pair<int, int> num2pt(const int n, const int w) { return make_pair(n / w, n % w); }

int main()
{
  cin.tie(nullptr);
  ios_base::sync_with_stdio(false);

  // write code here
  int h, w;
  cin >> h >> w;
  vector<vector<char>> s(h, vector<char>(w));
  for (size_t i = 0; i < h; ++i)
  {
    for (size_t j = 0; j < w; ++j)
    {
      cin >> s[i][j];
    }
  }
  atcoder::dsu grid(h * w);
  vector<int> gridh = {-1, -1, -1, 0, 0, 1, 1, 1};
  vector<int> gridw = { -1, 0, 1, -1, 1, -1, 0, 1 };
  for (size_t i = 0; i < h; ++i)
  {
    for (size_t j = 0; j < w; ++j)
    {
      for (size_t k = 0; k < 8; ++k)
      {
        if (i + gridh[k] >= 0 && i + gridh[k] < h && j + gridw[k] >= 0 && j + gridw[k] < w) {
          if (s[i][j] == s[i + gridh[k]][j + gridw[k]]) {
            grid.atcoder::dsu::merge(pt2num(i, j, w), pt2num(i + gridh[k], j + gridw[k], w));
          }
        }
      }
    }
  }
  auto returned_graph = grid.atcoder::dsu::groups();
  int cnt = 0;
  for (size_t i = 0; i < returned_graph.size(); ++i)
  {
    if (s[num2pt(returned_graph[i][0], w).first][num2pt(returned_graph[i][0], w).second] == '#') {
      ++cnt;
    }
  }
  cout << cnt << "\n";
  return 0;
}