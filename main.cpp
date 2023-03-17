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
  int N, M;
  cin >> N >> M;
  vector<set<int>> Ad(N + 1);
  for (int i = 0; i < M; i++) {
    int A, B;
    cin >> A >> B;
    Ad[A].insert(B);
    Ad[B].insert(A);
  }
  for (int i = 1; i <= N; i++) {
    int set_size = Ad[i].size();
    cout << Ad[i].size() << " ";
    if (set_size) {
      for (auto p : Ad[i]) {
        cout << p << " ";
      }
    }
    cout << endl;
  }
  return 0;
}
