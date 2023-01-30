#include <algorithm>
#include <bits/stdc++.h>

#define _GLIBCXX_DEBUG
#define rep(i, a, b) for (int i = a; i < b; ++i)
#define rrep(i, a, b) for (int i = a; i >= b; i--)
#define fore(i, a) for (auto &i : a)
#define all(x) (x).begin(), (x).end()
const int INF = 1e9;
const long long infl = 1LL << 60;
const int mod = 998244353;
const int MOD = 1e9 + 7;
const double PI = 3.141592653589;
using namespace std;
template <class T> bool chmax(T &a, const T &b) {
  if (a < b) {
    a = b;
    return 1;
  }
  return 0;
}
template <class T> bool chmin(T &a, const T &b) {
  if (b < a) {
    a = b;
    return 1;
  }
  return 0;
}
using ll = long long;
using ld = long double;
using Graph = vector<vector<int>>;
using Dp = vector<vector<ll>>;

int main() {
  ll a, b, c, d, e, f;
  cin >> a >> b >> c >> d >> e >> f;

  ll x = ((((a % mod) * (b % mod)) % mod) * (c % mod)) % mod;
  ll y = ((((d % mod) * (e % mod)) % mod) * (f % mod)) % mod;

  ll ans = (x - y) < 0 ? (x + mod - y) : x - y;
  cout << ans << endl;

  return 0;
}