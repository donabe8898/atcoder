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
  int a, b;
  vector<int> score = {4, 2, 1};
  cin >> a >> b;
  map<int, bool> mp;
  mp[1] = false;
  mp[2] = false;
  mp[4] = false;
  for (auto i : score) {
    if (a - i >= 0) {
      mp[i] = true;
      a -= i;
    }
    if (b - i >= 0) {
      mp[i] = true;
      b -= i;
    }
  }

  int sum = 0;
  for (auto ans : mp) {
    if (ans.second) {
      sum += ans.first;
    }
  }
  cout << sum << endl;
  return 0;
}
