#include <bits/stdc++.h>
using namespace std;
signed main() {
  int N, P, Q, R, S;
  cin >> N >> P >> Q >> R >> S;
  vector<int> A(N);
  for (int i = 0; i < N; i++) {
    cin >> A.at(i);
  }
  for (int i = P - 1; i < Q; i++) {
    swap(A[i], A[i + R - P]);
  }
  for (auto i : A) {
    cout << i << " ";
  }
  cout << endl;
  return 0;
}