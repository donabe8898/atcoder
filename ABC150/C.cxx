#include <bits/stdc++.h>

#define rep(i, a, b) for (int i = a; i < b; ++i)
#define rrep(i, a, b) for (int i = a; i >= b; i--)
#define fore(i, a) for (auto &i : a)
#define all(x) (x).begin(), (x).end()
const int INF = 1e9;
const long long infl = 1LL << 60;
const int mod = 998244353;
const int MOD = 1e9 + 7;
const double PI = 3.141592653589;
using namespace std;
template <class T> bool chmax(T &a, const T &b) {
  if (a < b) {
    a = b;
    return 1;
  }
  return 0;
}

template <class T> bool chmin(T &a, const T &b) {
  if (b < a) {
    a = b;
    return 1;
  }
  return 0;
}
using ll = long long;
using ld = long double;
using Graph = vector<vector<int>>;
using Dp = vector<vector<ll>>;
/**
 *    cout<<fixed<<setprecision(10)<<endl;
 *      ・sortからのlower_bound
 */

int main() {
  int N;
  cin >> N;
  vector<int> P(N), Q(N), AR(N);
  for (int i = 0; i < N; i++)
    cin >> P.at(i);
  for (int i = 0; i < N; i++) {
    cin >> Q.at(i);
    AR[i] = i + 1;
  }
  vector<vector<int>> A;
  do {
    A.push_back(AR);
  } while (next_permutation(AR.begin(), AR.end()));

  int ia = 0, ib = 0;
  int index = 1;

  for (auto a : A) {
    int p = 0, q = 0;
    for (int i = 0; i < N; i++) {
      if (a[i] == P[i]) {
        p++;
      }
      if (a[i] == Q[i]) {
        q++;
      }
    }
    if (p == N) {
      ia = index;
    }
    if (q == N) {
      ib = index;
    }
    index++;
  }
  cout << abs(ia - ib) << endl;
  return 0;
}
