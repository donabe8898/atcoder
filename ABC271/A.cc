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
  int n;
  cin >> n;
  string ans;
  char selecter[6] = {'A', 'B', 'C', 'D', 'E', 'F'};
  int i1 = n / 16;
  int i2 = n % 16;
  if (i1 > 9) {
    ans += selecter[i1 - 10];
  } else {
    ans += to_string(i1);
  }

  if (i2 > 9) {
    ans += selecter[i2 - 10];
  } else {
    ans += to_string(i2);
  }
  cout << ans << endl;
  return 0;
}
