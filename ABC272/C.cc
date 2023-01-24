#include <bits/stdc++.h>
#include <functional>

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

int main(void) {
  int n;
  cin >> n;
  vector<int> odd, even;
  for (int i = 0; i < n; i++) {
    int a;
    cin >> a;
    if (a % 2 == 0) {
      even.push_back(a);
    } else {
      odd.push_back(a);
    }
  }
  sort(odd.begin(), odd.end(), greater<>());
  sort(even.begin(), even.end(), greater<>());
  int ans = -1;
  if (odd.size() >= 2)
    ans = max(ans, odd[0] + odd[1]);
  if (even.size() >= 2)
    ans = max(ans, even[0] + even[1]);
  cout << ans << endl;
  return 0;
}