// ABC265-B
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

  int n, m;
  cin >> n >> m;
  vector<vector<bool>> xf(n, vector<bool>(n, false));
  for (int i = 0; i < m; i++) {
    int k;
    cin >> k;
    vector<int> x(k);
    for (int j = 0; j < k; j++) {
      cin >> x[j];
      x[j]--;
    }
    for (int ii = 0; ii < (int)x.size() - 1; ii++) {
      for (int jj = ii + 1; jj < (int)x.size(); jj++) {
        xf[x[ii]][x[jj]] = true;
      }
    }
  }
  for (int i = 0; i < n; i++) {
    for (int j = i + 1; j < n; j++) {
      if (!xf[i][j]) {
        cout << "No" << endl;
        return 0;
      }
    }
  }
  cout << "Yes" << endl;
  return 0;
}