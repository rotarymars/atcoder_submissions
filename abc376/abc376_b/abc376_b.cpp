#line 1 "B_Hands_on_Ring_Easy.cpp"
#include <bits/stdc++.h>

template <typename A, typename B>
inline void chmin(A& a, const B b) {
    if (a > b) a = b;
}
template <typename A, typename B>
inline void chmax(A& a, const B b) {
    if (a < b) a = b;
}

template <class A, class B>
std::ostream& operator<<(std::ostream& ost, const std::pair<A, B>& p) {
    ost << "{" << p.first << "," << p.second << "}";
    return ost;
}

template <class T>
std::ostream& operator<<(std::ostream& ost, const std::vector<T>& v) {
    ost << "{";
    for (int i = 0; i < v.size(); i++) {
        if (i) ost << ",";
        ost << v[i];
    }
    ost << "}";
    return ost;
}

inline int32_t parity(uint64_t x) { return __builtin_parity(x); }

int Yes() {
    std::cout << "Yes" << std::endl;
    return 0;
}
int No() {
    std::cout << "No" << std::endl;
    return 0;
}

void print() {}

template <class Head, class... Tail>
void print(Head&& head, Tail&&... tail) {
    std::cout << head;
    if (sizeof...(Tail)) {
        std::cout << " ";
    }
    print(std::forward<Tail>(tail)...);
}

template <class... Args>
void println(Args&&... args) {
    print(args..., '\n');
}

#define SHOW(...)                                             \
    SHOW_IMPL(__VA_ARGS__, SHOW6, SHOW5, SHOW4, SHOW3, SHOW2, \
              SHOW1)(__VA_ARGS__)
#define SHOW_IMPL(_1, _2, _3, _4, _5, _6, NAME, ...) NAME
#define SHOW1(x) println(#x, "=", (x))
#define SHOW2(x, y) println(#x, "=", (x), #y, "=", (y))
#define SHOW3(x, y, z) println(#x, "=", (x), #y, "=", (y), #z, "=", (z))
#define SHOW4(x, y, z, w) \
    println(#x, "=", (x), #y, "=", (y), #z, "=", (z), #w, "=", (w))
#define SHOW5(x, y, z, w, v)                                                 \
    println(#x, "=", (x), #y, "=", (y), #z, "=", (z), #w, "=", (w), #v, "=", \
            (v))
#define SHOW6(x, y, z, w, v, u)                                              \
    println(#x, "=", (x), #y, "=", (y), #z, "=", (z), #w, "=", (w), #v, "=", \
            (v), #u, "=", (u))

#define eb emplace_back
#define all(v) (v).begin(), (v).end()
#define fi first
#define se second
#define int long long
using vint = std::vector<int>;
using pint = std::pair<int, int>;
using vpint = std::vector<pint>;
using namespace std;

#define rep(i, n) for (int i = 0; i < (n); i++)

constexpr int INF = 1ll << 61;

signed main() {
    std::ios::sync_with_stdio(false);
    cin.tie(nullptr);
    // torichan

    int N, Q;
    cin >> N >> Q;
    int l = 0, r = 1;
    int ans = 0;
    while (Q--) {
        char h;
        int t;
        cin >> h >> t;
        t--;
        if (h == 'R') {
            swap(l, r);
        }
        if ((r - l + N) % N > (t - l + N) % N) {
            ans += (t - l + N) % N;
        } else {
            ans += (l - t + N) % N;
        }
        l = t;
        if (h == 'R') {
            swap(l, r);
        }
    }
    println(ans);
    return 0;
}
