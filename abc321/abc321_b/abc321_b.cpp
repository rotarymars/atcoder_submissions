#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
#include <numeric>

using namespace std;

int main()
{
  cin.tie(nullptr);
  ios_base::sync_with_stdio(false);

  // write code here
  int N, X, Amax, Amin, count = 0;
  cin >> N >> X;
  vector<int> A(N - 1);
  for (size_t i = 0; i < N - 1; ++i)
  {
    cin >> A[i];
  }
  sort(A.begin(), A.end());
  Amin = A[0];
  Amax = A[N - 2];


  for (int i = 0; i <= A[N - 2] + 1; ++i) {
    A.push_back(i);
    sort(A.begin(), A.end());
    Amin = A[0], Amax = A[N - 1];
    if (accumulate(A.begin(), A.end(), 0) - Amin - Amax >= X) {
      cout << i << endl;
      ++count;
      break;
    }
    else {
      // 消す要素が１つのときはこれでも良い
      // A.erase(find(A.begin(), A.end(), i));

      // こちらでも良い。eraseの第２引数を++itにしていたので、itの内容がかわってしまっていたのでだめだった
      auto it = find(A.begin(), A.end(), i);
      A.erase(it, it + 1);
    }
  }

  if (count == 0) {
    cout << -1 << endl;
  }

  return 0;
}