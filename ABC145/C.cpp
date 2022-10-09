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
/*memo[]===================================s
   cout<<fixed<<setprecision(10)<<endl;
	・sortからのlower_bound

===========================================*/

signed main(){
    int n;cin>>n;
    int pm=1;
    vector<int> a(n);
    rep(i,0,n){
        a[i]=i;
        if(i)pm*=i;
    }
    pm*=n;
    vector<int>x(n),y(n);
    rep(i,0,n){
        cin>>x[i]>>y[i];
    }
    ld ans=0;
    do{
        rep(i,0,n-1){
            ld dx=x[a[i]]-x[a[i+1]];
            ld dy=y[a[i]]-y[a[i+1]];
            ans +=sqrt(dx*dx+dy*dy);
        }
    }while(next_permutation(a.begin(),a.end()));
    cout<<fixed<<setprecision(10)<<ans/pm<<endl;
	return 0;
}
