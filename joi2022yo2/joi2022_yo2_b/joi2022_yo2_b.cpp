#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
#include <numeric>
#include <map>
#include <set>
#include <cmath>

using namespace std;

#define VALL(a) a.begin(), a.end()

namespace {
  using LL = long long;
  using VI = vector<int>;
  using VVI = vector<VI>;
  using VC = vector<char>;
  using VVC = vector<VC>;
  using VS = vector<string>;
  int CO2NUM(const int x, const int y, const int w) {
    return (x * w) + y;
  }

  pair<int, int> NUM2CO(const int n, const int w) {
    return { n / w, n % w };
  }

  template <class T>
  void PRINT1D(T a) {
    cout << "***VECTOR 1D PRINT STARTED***\n";
    cout << "{";
    for (size_t i = 0; i < a.size(); i++)
    {
      cout << a[i] << ", ";
    }
    cout << "}\n";
    cout << "***VECTOR 1D ENDED***\n";
  }

  template <class T>
  void PRINT2D(T a) {
    cout << "***VECTOR 2D STARTED***\n";
    cout << "{";
    for (size_t i = 0; i < a.size(); i++)
    {
      cout << "\n{";
      for (size_t j = 0; j < a[i].size(); j++)
      {
        cout << a[i][j] << ", ";
      }
      cout << "}, ";
    }
    cout << "\n}\n";
    cout << "***VECTOR 2D ENDED***\n";
  }

  namespace CAL {
    VI zero() {
      return { 0 };
    }
    VI one() {
      return { 1 };
    }
    VI two() {
      return { 2 };
    }
    VI three() {
      return { 3 };
    }
    VI four() {
      return { 4 };
    }
    VI five() {
      return { 5 };
    }
    VI six() {
      return { 6 };
    }
    VI seven() {
      return { 7 };
    }
    VI eight() {
      return { 8 };
    }
    VI nine() {
      return { 9 };
    }
    VI ten() {
      return { 10 };
    }
  }
  VI STRINGVI(string a) {
    VI ans(a.size());
    for (size_t i = 0; i < a.size(); i++)
    {
      ans.push_back(a[i] - '0');
    }
    return ans;
  }
  string VISTRING(VI a) {
    string ans;
    for (size_t i = 0; i < a.size(); i++)
    {
      ans = ans + to_string(a[i]);
    }
    return ans;
  }
  VI REMOVEZERO(VI a) {
    bool flag = true;
    while (flag) {
      if (!(a.size() <= 1)) {
        if (*a.begin() == 0) {
          a.erase(a.begin());
        }
        else {
          break;
        }
      }
      else {
        break;
      }
    }
    return a;
  }
  VI ADDITION(VI a, VI b) {
    size_t a_size = a.size(), b_size = b.size(), up = 0, am, bm;
    VI ans;
    for (size_t i = 1; i <= max((int)a_size, (int)b_size) + 1; i++)
    {
      if (i <= a_size) {
        am = a[a_size - i];
      }
      else {
        am = 0;
      }
      if (i <= b_size) {
        bm = b[b_size - i];
      }
      else {
        bm = 0;
      }
      ans.insert(ans.begin(), (am + bm + up) % 10);
      up = (am + bm + up) / 10;
    }
    ans = REMOVEZERO(ans);
    return ans;
  }
  VI SUBTRACTION(VI a, VI b) {
    size_t a_size = a.size(), b_size = b.size();
    int am, bm, nextdown = 0;
    VI ans;
    for (size_t i = 1; i <= max((int)a_size, (int)b_size); i++)
    {
      if (i <= a_size) {
        am = a[a_size - i];
      }
      else {
        am = 0;
      }
      if (i <= b_size) {
        bm = b[b_size - i];
      }
      else {
        bm = 0;
      }
      if (am - bm + nextdown >= 0) {
        ans.insert(ans.begin(), am - bm + nextdown);
        nextdown = 0;
      }
      else {
        am += 10;
        ans.insert(ans.begin(), am - bm + nextdown);
        nextdown = -1;
      }
    }
    return REMOVEZERO(ans);
  }
  VI MULTIPLICATION(VI a, VI b) {
    size_t a_size = a.size(), b_size = b.size(), am, bm;
    VI ans = { 0 }, line = {};
    for (size_t i = 1; i <= b_size; i++)
    {
      line = {};
      bm = b[b_size - i];
      for (size_t j = 0; j < i - 1; j++)
      {
        line.insert(line.begin(), 0);
      }
      for (size_t j = 1; j <= a_size; j++)
      {
        am = a[a_size - j];
        line.insert(line.begin(), am * bm);
      }
      line.insert(line.begin(), 0);
      size_t line_size = line.size();
      for (size_t j = 1; j <= line_size; j++)
      {
        if (line[line_size - j] >= 10) {
          line[line_size - j - 1] += (line[line_size - j] / 10);
          line[line_size - j] = line[line_size - j] % 10;
        }
      }
      ans = ADDITION(ans, line);
    }
    return REMOVEZERO(ans);
  }
}
//ここから読んでね
int main()
{
  cin.tie(nullptr);
  ios_base::sync_with_stdio(false);

  // write code here
  int h, w;
  cin >> h >> w;
  VS carpet(h);//20行目参照、vector<string>
  for (auto& i : carpet)
  {
    cin >> i;
  }
  VVI move(h, VI(w, 1e9));//手数を管理する。1 <= h, w <= 500 なので 500 * 500 = 250000でもいいが、念のため
  //1e9 ・・・ 1 * (10 ** 9)
  move[0][0] = 0;//開始位置の手数を0に初期化
  VI gridh = { -1, 0, 1, 0 }, gridw = {0, 1, 0, -1};//上下左右の相対的な位置関係を作る
  vector<int> que = { 0 };//キュー、　次にチェックしたい場所の圧縮した座標を入れる
  int nowque, nowh, noww;
  while (!que.empty()) {
    nowque = *que.begin();//現在読み込んでいるキュー
    que.erase(que.begin());//読み込んだら削除
    nowh = NUM2CO(nowque, w).first;//読み込んだものを分解
    noww = NUM2CO(nowque, w).second;//上記同様
    for (size_t i = 0; i < 4; i++)//上下左右のループを回す
    {
      if ((nowh + gridh[i] >= 0) && (nowh + gridh[i] < h) && (noww + gridw[i] >= 0) && (noww + gridw[i] < w)) {//vectorのレンジ外のインデックスを渡すのは未定義動作なので、ならないようフィルターをかける
        if (carpet[nowh + gridh[i]][noww + gridw[i]] != carpet[nowh][noww]) {//上下左右のマスは一つ前のマスとカーペットの色が異なるか否か
          if (move[nowh + gridh[i]][noww + gridw[i]] > move[nowh][noww] + 1) {//今回のチェックしようとしているものは最短の手かチェック
            que.push_back(CO2NUM(nowh + gridh[i], noww + gridw[i], w));//最短だったら、次にチェックする点に追加
            move[nowh + gridh[i]][noww + gridw[i]] = move[nowh][noww] + 1;//手数を書き換え
          }
        }
      }
    }
  }
  if (move[h - 1][w - 1] != 1e9) {
    cout << move[h - 1][w - 1] << "\n";//ゴールが1e9でなければ手数を出力
  }
  else {//そうでなければ-1を出力
    cout << -1 << "\n";
  }
  return 0;
}