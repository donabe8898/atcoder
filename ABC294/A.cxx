#include <bits/stdc++.h>

using namespace std;

signed main() {
  int N;
  cin >> N;
  vector<int> A(N);
  for (int i = 0; i < N; i++) {
    cin >> A[i];
  }
  for (auto a : A) {
    if (a % 2 == 0) {
      cout << a << ' ';
    }
  }
  cout << endl;
  return 0;
}