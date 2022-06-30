//
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
/*memo[]===================================
   cout<<fixed<<setprecision(10)<<endl;
	・sortからのlower_bound

===========================================*/

signed main(){
    int n,p;cin>>n;
    string s;
    map<string,vector<pair<int,int>>> mpx;
    rep(i,1,n+1){
        cin>>s>>p;
        mpx[s].push_back(make_pair(p,i));
    }
    for(auto &[k,v]:mpx){
        sort(v.begin(),v.end(),greater<>());
    }
    for(auto &[k,v]:mpx){
        for(auto vec:v){
            cout<<vec.second<<endl;
        }
    }
	return 0;
}
