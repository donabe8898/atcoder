#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main() {
  ll N, D;
  cin >> N >> D;
  vector<ll> T(N);
  for (int i = 0; i < N; i++) {
    cin >> T[i];
  }
  for (int i = 0; i < N - 1; i++) {
    if (T[i + 1] - T[i] <= D) {
      cout << T[i + 1] << endl;
      return 0;
    }
  }
  cout << -1 << endl;
  return 0;
}