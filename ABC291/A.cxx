#include <iostream>
using namespace std;
signed main() {
  string s;
  cin >> s;
  for (int i = 0; i < s.size(); i++) {
    if (s[i] < 'a') {
      cout << i + 1 << endl;
      return 0;
    }
  }
  return 0;
}