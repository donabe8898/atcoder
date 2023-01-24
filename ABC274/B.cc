#include <bits/stdc++.h>

using namespace std;
int main() {
  int h, w;
  cin >> h >> w;
  vector<vector<char>> c(h, vector<char>(w));
  vector<int> x;

  for (int i = 0; i < h; i++) {
    for (int j = 0; j < w; j++) {
      cin >> c[i][j];
    }
  }
  for (int j = 0; j < w; j++) {
    int X = 0;
    for (int i = 0; i < h; i++) {
      if (c[i][j] == '#')
        X++;
    }
    x.push_back(X);
  }
  for (int i : x) {
    cout << i << " ";
  }
  cout << endl;

  return 0;
}