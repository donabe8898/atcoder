#include <bits/stdc++.h>

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
  int N;
  string S;
  cin >> N;
  cin >> S;
  if (N % 2 != 0) {
    cout << -1 << endl;
    return 0;
  }
  string LS, RS;
  for (int i = 0; i < N / 2; i++) {
    LS.push_back(S[i]);
  }
  for (int j = N / 2; j < N; j++) {
    RS.push_back(S[j]);
  }
  int ans = 0;
  for (int i = 0; i < N / 2; i++) {
    if (LS[i] != RS[i]) {
      ans++;
    }
  }
  cout << ans << endl;
  return 0;
}
