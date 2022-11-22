// ABC265-B
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
/**
 *    cout<<fixed<<setprecision(10)<<endl;
 *      ・sortからのlower_bound
 */

int main() {
  ll N_room, M_bonuses, T_time;
  cin >> N_room >> M_bonuses >> T_time;
  vector<ll> A(N_room - 1);
  rep(i, 0, N_room - 1) cin >> A[i];
  ll X;
  vector<ll> Y(N_room, 0);
  rep(i, 0, M_bonuses) cin >> X >> Y[X - 2];

  rep(idx, 0, N_room - 1) {
    if (T_time - A[idx] <= 0) {
      cout << "No" << endl;
      return 0;
    }
    T_time -= A[idx];
    T_time += Y[idx];
  }
  cout << "Yes" << endl;
  return 0;
}
