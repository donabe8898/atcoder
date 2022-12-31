#include <bits/stdc++.h>
using ll = long long int;
#define RES 2000000;
using namespace std;
int main() {
  cin.tie(0);
  ios_base::sync_with_stdio(false);
  string s, ans;
  cin >> s;
  for (auto a : s) {
    if (a == '.') {
      break;
    }
    ans.push_back(a);
  }
  cout << ans << endl;
  return 0;
}
