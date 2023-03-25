#include <bits/stdc++.h>
#include <string>
using namespace std;

signed main() {
  string S;
  cin >> S;
  map<char, int> mp = {{'a', 0}, {'t', 1}, {'c', 2}, {'o', 3},
                       {'d', 4}, {'e', 5}, {'r', 6}};

  int ans = 0;
  for (int i = 0; i < 6; i++) {
    for (int j = 0; j < 6 - i; j++) {
      if (mp[S[j]] > mp[S[j + 1]]) {
        swap(S[j], S[j + 1]);
        ans++;
      }
    }
  }
  cout << ans << endl;
  return 0;
}