#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define REP(i, a, n) for (int i = a; i < (int)(n); i++)

using namespace std;

int main() {
  int card;
  map<char, int> mp;
  rep(i, 5) {
    cin >> card;
    mp[card] += 1;
  }
  bool two = false, three = false;
  for (auto kv : mp) {
    if (kv.second == 3)
      three = true;
    if (kv.second == 2)
      two = true;
  }
  if (two && three) {
    cout << "Yes" << endl;
  } else {
    cout << "No" << endl;
  }
  return 0;
}