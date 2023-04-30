#include <bits/stdc++.h>
using namespace std;
int main() {
  int H, W;
  cin >> H >> W;
  vector<string> S;
  for (int i = 0; i < H; i++) {
    string str;
    cin >> str;
    S.push_back(str);
  }
  int ans = 0;
  for (int i = 0; i < H; i++) {
    for (int j = 0; j < W - 1; j++) {
      if (S[i][j] == 'T' && S[i][j + 1] == 'T') {
        S[i][j] = 'P';
        S[i][j + 1] = 'C';
      }
    }
  }
  for (string s : S) {
    cout << s << endl;
  }
  return 0;
}