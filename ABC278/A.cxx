#include <bits/stdc++.h>

using namespace std;

signed main() {
  int N, K;
  cin >> N >> K;
  queue<int> Q;
  for (int i = 0; i < N; i++) {
    int a;
    cin >> a;
    Q.push(a);
  }
  for (int k = 0; k < K; k++) {
    Q.pop();
    Q.push(0);
  }
  while (!Q.empty()) {
    cout << Q.front() << ' ';
    Q.pop();
  }
  cout << endl;
  return 0;
}