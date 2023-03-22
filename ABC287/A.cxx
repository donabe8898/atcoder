#include <bits/stdc++.h>
using namespace std;
signed main() {
  int N, cnt = 0;
  cin >> N;
  string S;
  for (int i = 0; i < N; i++) {
    cin >> S;
    if (S == "For") {
      cnt++;
    }
  }
  if (cnt > N / 2) {
    cout << "Yes" << endl;
  } else {
    cout << "No" << endl;
  }

  return 0;
}