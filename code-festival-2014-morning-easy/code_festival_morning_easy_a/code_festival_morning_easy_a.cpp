#include <iomanip>
#include <iostream>
using namespace std;
int main() {
  cin.tie(nullptr);
  ios::sync_with_stdio(false);
  int n;
  cin >> n;
  int bef;
  cin >> bef;
  long double ans = 0;
  for (int i = 0; i < n - 1; i++) {
    int tmp;
    cin >> tmp;
    ans += tmp - bef;
    bef = tmp;
  }
  cout << fixed << setprecision(10) << ans / (long double)(n - 1) << endl;
}
