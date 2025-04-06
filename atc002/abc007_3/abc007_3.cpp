#include <iostream>
#include <vector>
#include <queue>
using namespace std;
int main()
{
  int h, w;
  cin >> h >> w;
  vector<string> grid(h);
  int sh, sw, gh, gw;
  cin >> sh >> sw >> gh >> gw;
  for (int i = 0; i < h; i++){
    cin >> grid[i];
  }
  --sh;
  --sw;
  --gh;
  --gw;
  vector<vector<int>> ans(h, vector<int>(w, 1e9));
  ans[sh][sw] = 0;
  queue<pair<int, int>> que;
  que.push({sh, sw});
  vector<int> gridh = {-1, 0, 0, 1}, gridw = {0, -1, 1, 0};
  while(!que.empty())
  {
    pair<int, int> nowpair = que.front();
    que.pop();
    if (nowpair.first == gh && nowpair.second == gw){
      cout << ans[nowpair.first][nowpair.second] << "\n";
      return 0;
    }
    for (int i = 0; i < 4; i++){
      if (grid[nowpair.first + gridh[i]][nowpair.second + gridw[i]] == '.' && ans[nowpair.first + gridh[i]][nowpair.second + gridw[i]] > ans[nowpair.first][nowpair.second] + 1)
      {
        que.push({nowpair.first + gridh[i], nowpair.second + gridw[i]});
        ans[nowpair.first + gridh[i]][nowpair.second + gridw[i]] = ans[nowpair.first][nowpair.second] + 1;
      }
    }
  }
}