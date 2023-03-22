#include <bits/stdc++.h>
using namespace std;

void search(vector<vector<int>> &A, int i, int j, int &H, int &W, int &ans,
            set<int> a) {
  if (a.find(A[i][j]) != a.end()) {
    return;
  }

  else {
    a.insert(A[i][j]);
    if (i == H - 1 && j == W - 1) {
      ans++;
      return;
    }
    if (i + 1 < H)
      search(A, i + 1, j, H, W, ans, a);
    if (j + 1 < W)
      search(A, i, j + 1, H, W, ans, a);
  }
}

signed main() {
  int H, W;
  cin >> H >> W;
  vector<vector<int>> A(H, vector<int>(W));
  for (int i = 0; i < H; i++) {
    for (int j = 0; j < W; j++) {
      cin >> A[i][j];
    }
  }
  int ans = 0;
  search(A, 0, 0, H, W, ans, set<int>());
  cout << ans << endl;

  return 0;
}