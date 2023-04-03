#include <bits/stdc++.h>
using namespace std;
signed main() {
  vector<string> S;
  for (int i = 0; i < 8; i++) {
    string str;
    cin >> str;
    S.push_back(str);
  }
  for (int i = 0; i < 8; i++) {
    for (int j = 0; j < 8; j++) {
      if (S[i][j] == '*') {
        cout << (char)(97 + j) << 8 - i << endl;
        return 0;
      }
    }
  }

  return 0;
}