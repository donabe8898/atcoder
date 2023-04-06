#include <bits/stdc++.h>

using namespace std;

signed main() {
  int H, W;
  cin >> H >> W;
  vector<vector<int>> A(H, vector<int>(W));

  for (int i = 0; i < H; i++) {
    for (int j = 0; j < W; j++) {
      cin >> A[i][j];
    }
  }

  vector<string> ANS(H);
  for (int i = 0; i < H; i++) {
    for (int j = 0; j < W; j++) {
      if (A[i][j] == 0) {
        ANS[i].push_back('.');
      } else {
        ANS[i].push_back((char)(64 + A[i][j]));
      }
    }
  }

  for (auto s : ANS) {
    cout << s << endl;
  }
  return 0;
}