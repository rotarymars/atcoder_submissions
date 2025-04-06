#include <algorithm>
#include <iostream>
#include <map>
#include <set>
#include <string>
#include <vector>

using namespace std;

namespace {
  using ll = long long;
} // namespace

int main() {
  cin.tie(nullptr);
  ios::sync_with_stdio(false);

  // write here
  size_t N, M, L;
  cin >> N >> M >> L;

  vector<ll> a(N);
  map<ll, vector<ll>, greater<>> ma;
  for (size_t i = 0; i < N; i++) {
    cin >> a[i];
    ma[a[i]].push_back(i);
  }

  vector<ll> b(M);
  map<ll, vector<ll>, greater<>> mb;
  for (size_t i = 0; i < M; i++) {
    cin >> b[i];
    mb[b[i]].push_back(i);
  }

  ll c, d;
  set<ll> s;
  for (size_t i = 0; i < L; i++) {
    cin >> c >> d;
    --c;
    --d;
    s.insert(c + (N * d));
  }

  ll mx = 0;
  int i = 0;
  int j = 0;
  ll mb_max = 0;
  if (not mb.empty()) {
    mb_max = mb.begin()->first;
  }

  for (const auto [ap, av] : ma) {
    if (ap + mb_max < mx) {
      break;
    }
    for (const auto [bp, bv] : mb) {
      if (ap + bp <= mx) {
        break;
      }
      for (const auto& ai : av) {
        for (const auto& bi : bv) {
          if (not s.contains(ai + (N * bi))) {
            mx = max(mx, ap + bp);
          }
        }
      }
    }
  }

  cout << mx << "\n";

  return 0;
}
