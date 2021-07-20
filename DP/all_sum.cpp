#include <iostream>
#include <vector>
using namespace std;

bool func(int i, int x, const vector<int> &a,vector<vector<int>> &dp) {
    // ベースケース
    if (i == 0) {
        if (x == 0) return true;
        else return false;
    }
	 //memo check
	 if(dp[i][x] != -1) return dp[i][x];

    // a[i-1] を選ばない場合 (func(i-1, x, a) が OK なら OK)
    if (func(i-1, x, a, dp)) return dp[i][x] = 1;

    // a[i-1] を選ぶ場合 (func(i-1, x-a[i-1], a) が OK なら OK)
    if (func(i-1, x-a[i-1], a, dp)) return dp[i][x] = 1;

	 return dp[i][x] = 0;

    // どっちもダメだったらダメ
    return false;
}

int main() {
    // 入力
    int n; cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; ++i) cin >> a[i];
    int X; cin >> X;
	 const int MAX = 100000;
	 vector<vector<int> > dp(n+1, vector<int>(MAX+1, -1));
    // 再帰的に解く
    if (func(n, X, a, dp)) cout << "Yes" << endl;
    else cout << "No" << endl;
}
