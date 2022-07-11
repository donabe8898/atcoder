//
#include<bits/stdc++.h>
#define _GLIBCXX_DEBUG
#define rep(i,a,b) for(int i=a;i<b;++i)
#define rrep(i,a,b) for(int i=a;i>=b;i--)
#define fore(i,a) for(auto &i:a)
#define all(x) (x).begin(),(x).end()
const int INF = 1e9;
const long long infl = 1LL<<60;
const int mod = 998244353;
const int MOD = 1e9+7;
const double PI = 3.141592653589;
using namespace std;
template<class T>bool chmax(T& a, const T& b) { if (a < b) { a = b; return 1; } return 0; }
template<class T>bool chmin(T& a, const T& b) { if (b < a) { a = b; return 1; } return 0; }
using ll = long long;
using ld = long double;
using Graph = vector<vector<int>>;
using Dp = vector<vector<ll>>;
/*memo[]===================================
   cout<<fixed<<setprecision(10)<<endl;
	・sortからのlower_bound
 
===========================================*/
 
signed main(){
    ll n,k;
    cin>>n>>k;
    vector<vector<ll>> T(n,vector<ll>(n));
    vector<int> r(n-1);
    rep(i,0,n)rep(j,0,n)cin>>T[i][j];
    
    rep(i,1,n){
        r[i-1]=i;
    }
    int ans=0;
    do{
        ll sum = 0;
        sum+=T[0][r[0]];
        rep(i,0,n-1-1){
            sum+=T[r[i]][r[i+1]];
        }
        sum+=T[r[n-1-1]][0];
        if(sum==k)ans++;
    }while(next_permutation(all(r)));
    cout<<ans<<endl;
    
	return 0;
}