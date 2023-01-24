#include <algorithm>
#include <bits/stdc++.h>
#include <string>

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
  ll x, k;
  cin >> x >> k;
  ll pw = 1;
  for (ll i = 0; i < k; i++) {
    x /= pw;
    ll m = (x % 10);
    if (m < 5) {
      x -= m;
    } else {
      x += (10 - m);
    }
    x *= pw;
    pw *= 10;
  }
  cout << x << endl;

  return 0;
}