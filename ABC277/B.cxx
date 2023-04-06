#include <bits/stdc++.h>

using namespace std;

signed main() {
  int N;
  cin >> N;
  vector<string> S;
  for (int i = 0; i < N; i++) {
    string str;
    cin >> str;
    S.push_back(str);
  }
  string fst = "HDCS", snd = "A23456789TJQK";
  set<string> st;
  for (auto s : S) {
    if (find(fst.begin(), fst.end(), s[0]) == fst.end()) {
      cout << "No" << endl;
      return 0;
    }
    if (find(snd.begin(), snd.end(), s[1]) == snd.end()) {
      cout << "No" << endl;
      return 0;
    }
    if (st.find(s) != st.end()) {
      cout << "No" << endl;
      return 0;
    }
    st.insert(s);
  }
  cout << "Yes" << endl;
  return 0;
}