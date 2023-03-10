// ABC246-C
#include <bits/stdc++.h>
#include <cstdint>
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
/**
 *    cout<<fixed<<setprecision(10)<<endl;
 *      ・sortからのlower_bound
 */

int main() {
  ll n;
  cin >> n;
  vector<ll> a(n);
  for (ll i = 0; i < n; i++) {
    cin >> a[i];
  }
  ll m;
  cin >> m;
  vector<ll> b(m);
  for (ll i = 0; i < m; i++) {
    cin >> b[i];
  }
  ll x;
  cin >> x;
  vector<ll> dp(x + 1);
  vector<bool> mochi(x + 1, false);
  for (auto B : b) {
    mochi[B] = true;
  }
  dp[0] = true;
  for (ll i = 1; i <= x; i++) {
    if (mochi[i]) {
      dp[i] = false;
    } else {
      for (auto A : a) {
        if (i >= A) {
          dp[i] = dp[i] || dp[i - A];
        }
      }
    }
  }
  cout << (dp[x] ? "Yes" : "No") << endl;
  return 0;
}
