#include <bits/stdc++.h>

using namespace std;

int main() {
  int H, W;
  cin >> H >> W;

  vector<string> A(H);
  for (int i = 0; i < H; i++) {
    cin >> A[i];
  }

  vector<bool> r(H, 0);
  vector<bool> c(W, 0);
  for (int i = 0; i < H; i++) {
    for (int j = 0; j < W; j++) {
      if (A[i][j] == '#') {
        r[i] = 1;
        c[j] = 1;
      }
    }
  }
  for (int i = 0; i < H; i++) {
    if (r[i]) {
      for (int j = 0; j < W; j++) {
        if (c[j])
          cout << A[i][j];
      }
      cout << endl;
    }
  }

  return 0;
}