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
int num[4],v=0,sum;
char s[4];
string ans;
void dfs(int num[],int v,int sum,char s[]){
    if(v==4){
		if(sum==7){
			ans=s;
			return ;
		}
		return ;
	}
	rep(i,0,2){
		if(!i){
			s[v-1]='+';
			dfs(num,v+1,sum+num[v],s);
		}
		else{
			s[v-1]='-';
			dfs(num,v+1,sum-num[v],s);
		}
	}
	return;
}
signed main(){
	string S;
	cin>>S;
	rep(i,0,4){
		num[i]=S[i]-'0';
	}
	dfs(num,1,num[0],s);
	rep(i,0,4){
		cout<<num[i];
		if(i!=3)cout<<ans[i];
	}
	cout<<"=7"<<endl;
	return 0;
}
