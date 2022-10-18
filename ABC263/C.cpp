#include<bits/stdc++.h>
#define _GLIBCXX_DEBUG
#define rep(i,a,b) for(int i=a;i<b;++i)
#define rrep(i,a,b) for(int i=a;i>=b;i--)
#define fore(i,a) for(auto &i:a)
#define all(x) (x).begin(),(x).end()
const int INF = 1e9;
const int mod = 998244353;
const int MOD = 1e9+7;
using namespace std;
template<class T>bool chmax(T& a, const T& b) { if (a < b) { a = b; return 1; } return 0; }
template<class T>bool chmin(T& a, const T& b) { if (b < a) { a = b; return 1; } return 0; }
using ll = long long;
using ld = long double;
using Glaph = vector<vector<int>>;
using Dp = vector<vector<ll>>;
/*memo[]===================================s
   cout<<fixed<<setprecision(10)<<endl;
	・sortからのlower_bound

===========================================*/
int n,m;
int cnt;
int a[2000000];
//DFSでイク
void dfs (int num)
{
    if (num > n) {
        for (int i = 1; i <=n; i++)
            cout << a[i] << ' ';
        cout << endl;
        return ;
    }
    for (int i = a[num-1]+1; i <= m; i++) {
        a[num] = i;
        dfs (num + 1);
    }
}

signed main ()
{
    cin >> n >> m;
    dfs (1);
    return 0;
}