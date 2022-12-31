#include <bits/stdc++.h>

#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define REP(i, a, n) for (int i = a; i < (int)(n); i++)

using ll = long long;
using namespace std;

const int mod = 998244353;

int main() {
  ll n;
  cin >> n;
  n %= mod;
  cout << (n < 0 ? n + mod : n) << endl;
  return 0;
}
