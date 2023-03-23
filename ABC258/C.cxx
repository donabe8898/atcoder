#include <bits/stdc++.h>
using namespace std;
using ll = long long;
signed main() {
  ll N, Q;
  cin >> N >> Q;
  string S;
  cin >> S;
  ll p = 0;

  for (ll i = 0; i < Q; i++) {
    ll q, n;
    cin >> q >> n;
    if (q == 1) {
      p += N - n % N;
    } else {
      cout << S[(p + n - 1) % N] << endl;
    }
  }

  return 0;
}