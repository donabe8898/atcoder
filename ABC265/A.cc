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

int main() {
  vector<string> week = {"Sunday",   "Monday", "Tuesday", "Wednesday",
                         "Thursday", "Friday", "Saturday"};
  string s;
  cin >> s;
  int i = 0, cnt = 0;
  bool cnt_bool = false;
  while (1) {
    if (cnt_bool) {
      cnt++;
    }
    if (week[i % 7] == s)
      cnt_bool = true;

    if ("Saturday" == week[i % 7]) {
      cout << cnt << endl;
      return 0;
    }
    i++;
  }
  return 0;
}
