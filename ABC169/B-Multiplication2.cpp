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
	ll n;
	cin>>n;
	ll a[100010],p=1,s=pow(10,18);
	rep(i,0,n){
		cin>>a[i];
		if(!a[i]){
			cout<<0<<endl;
			return 0;
		}
	}
	rep(i,0,n){
		if(infl / p < a[i]){
			p = infl;
		}
		else {
			p = min(infl,p*a[i]);
		}
	}
	if(p>s)cout<<-1<<endl;
	else cout<<p<<endl;
	
	return 0;
}
