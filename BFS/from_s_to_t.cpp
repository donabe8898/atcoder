#include <bits/stdc++.h>
#include <atcoder/all>
#define endl "\n"
#define all(n) n.begin(),n.end()
#define rall(n) n.rbegin(),n.rend()
#define rep(i,n) for(int i=0;i<(int)(n);i++)
#define REP(i, s, n) for (int i = s; i < (int)(n); i++)
#define floatset(n) fixed<<setprecision(n)
#define rangeout(x,y,h,w) (x<0||y<0||h-1<x||w-1<y)
using namespace std;
using namespace atcoder;
template<class T>using vec=vector<T>;
template<class T>using min_queue=priority_queue<T,vector<T>,greater<T>>;
using ll = long long;
using ld = long double;
using pll = pair<ll,ll>;
using Graph1 = vector<int>;
using Graph2 = vector<vector<int>>;
struct Edge1{ll to,cost;};
using WGraph = vec<vec<Edge1>>;
struct BellEdge{ll from,to,cost;};
using BGraph=vec<BellEdge>;
constexpr ll INF = 1e18;
constexpr ll mod = 1000000007;
constexpr ll MOD = 998244353;
constexpr int dx[4]={1,0,-1,0};
constexpr int dy[4]={0,1,0,-1};
template<typename T>
bool chmin(T&a,T b){return a>b?a=b,true:false;}
template<typename T>
bool chmax(T&a,T b){return a<b?a=b,true:false;}
bool Flag(int bit,int i){return (bit&(1LL<<i));}
template<typename A, size_t N, typename T>
void Fill(A (&array)[N], const T &val){
    fill( (T*)array, (T*)(array+N), val );
}
/*
	グラフ GG の二頂点s,t∈V が与えられたとき、s から辺をたどって
	tt に到達できるかどうかを判定する問題を考えてます。
	これは単純に、s を始点とした BFS を実施してあげればよいです。BFS 実施後において
	dist 配列を見ることで、各頂点が探索されたかどうかを判定することができます。
	dist[t] == -1 であれば t へ辿り着けないことを表し、
	dist[t] != -1 であれば t へ辿り着けることがわかります。
*/
int main (){
		cin.tie(0);
		ios_base::sync_with_stdio(false);
		int N,M,s,t; cin>>N>>M>>s>>t;
		Graph2 G(N);	//2次元グラフ
		//グラフ入力
		for(int i=0;i<M;i++){
			int a,b; cin>>a>>b;
			G[a].push_back(b);
		}
		vector<int> dist(N,-1);
		queue<int> Q;
		dist[s] = 0, Q.push(s);
		while(!Q.empty()){
			int v=Q.front();Q.pop();
			for(auto nv:G[v]){
				if(dist[nv]==1){
					dist[nv]=dist[v]+1;
					Q.push(nv);
				}
			}
		}
		if(dist[t]!=-1) cout<<"Yes"<<endl;
		else cout<<"No"<<endl;
		return 0;
}
