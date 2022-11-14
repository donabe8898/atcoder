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
  // input
  ll N_rooms, M_bonus, Time;
  cin >> N_rooms >> M_bonus >> Time;
  vector<ll> A(N_rooms - 1);
  map<ll, ll> XY;
  queue<ll> X;
  for (ll i = 0; i < N_rooms - 1; i++)
    cin >> A[i];

  for (ll j = 0; j < M_bonus; j++) {
    ll x, y;
    cin >> x >> y;
    XY[x] = y;
    X.push(x);
  }
  /**
   * 持ち時間チェック
   * マイナス
   * queue
   * map
   * queue pop
   * 2 kara kaishi
   *
   * Test
   * 6 2 10
   * 2 2 3 2 1
   * 4 4
   * 5 1
   */
  for (ll idx = 0; idx < N_rooms - 1; idx++) {
    if (Time - A[idx] < 0) { // ng ng ng ng ng
      cout << "No" << endl;
      return 0;
    }
    // X(4,5)
    Time -= A[idx];               // 10-2 8-2 6-3 7-2 6-1
    if (!X.empty()) {             // ok ok ok ok ng
      if (idx + 2 == X.front()) { // ng ng ok ok
        Time += XY.at(X.front()); // - - 3+=4 5+=1
        X.pop();
      }
    }
  }
  cout << "Yes" << endl;
  return 0;
}
