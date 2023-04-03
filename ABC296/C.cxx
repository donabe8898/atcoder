#include <algorithm>
#include <bits/stdc++.h>

using namespace std;
using ll = long long;
signed main() {
  ll N, X;
  cin >> N >> X;
  set<ll> A;
  for (int i = 0; i < N; i++) {
    ll a;
    cin >> a;
    A.insert(a);
  }
  for (ll a : A) {
    if (A.find(a + X) != A.end()) {
      cout << "Yes" << endl;
      return 0;
    }
  }
  cout << "No" << endl;
  return 0;
}