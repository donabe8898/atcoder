#include <bits/stdc++.h>
#include <functional>
#include <linux/limits.h>
#include <sys/select.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define REP(i, a, n) for (int i = a; i < (int)(n); i++)

using ll = long long;
using namespace std;

const int mod = 998244353;

int main() {
  string s = "atcoder";
  int l, r;
  cin >> l >> r;
  for (int i = l - 1; i < r; i++) {
    cout << s[i];
  }
  cout << endl;
  return 0;
}
