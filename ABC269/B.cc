// ABC265-B
#include <bits/stdc++.h>
#include <cstdlib>
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
  vector<string> s(10);
  for (int i = 0; i < 10; i++) {
    cin >> s[i];
  }
  int a = INF, c = INF;
  int b = -1, d = -1;
  for (int i = 0; i < 10; ++i) {
    for (int j = 0; j < 10; ++j) {
      if (s[i][j] == '#') {
        chmin(a, i);
        chmin(c, j);
        chmax(b, i);
        chmax(d, j);
      }
    }
  }
  cout << a + 1 << " " << b + 1 << endl;
  cout << c + 1 << " " << d + 1 << endl;

  return 0;
}
