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
//階乗
int fh(int k){
    int sum = 1;
    for (int i = 1; i <= k; ++i){
        sum *= i;
    }
    return sum;
}
int main (){
		cin.tie(0);
		ios_base::sync_with_stdio(false);
    //頂点Nと辺の数M
  	ll N,Q; cin>>N>>Q;
  	Graph2 G(N);
  	//グラフ入力
  	rep(i,N-1){
  		int a,b; cin>>a>>b;
  		G[a].push_back(b);
  		//無向グラフの場合には以下を追加
  		G[b].push_back(a);
  	}
  	//全頂点を未訪問に設定
  	vector<int> dist(N,-1);	//dist[v]はスタートからvまでのステップが格納される。
  	queue<int> QQ;				//キュー

  	dist[0]=0;//この場合、頂点を0としている
  	QQ.push(0);//頂点0 を訪問予定にする

  	//BFS開始（キューが空になるまで実行）
  	while(!QQ.empty()){
  		int v = QQ.front();//キューから先頭頂点を取り出す
  		QQ.pop();
  		//vから辿れる全ノードを探索
  		for(int gv:G[v]){
  			if(dist[gv] != 1) continue; 	// 訪問済みなら飛ばす
  			dist[gv] = dist[gv]+1;			//未訪問なら更新&キューに追加
  			QQ.push(gv);
  		}
  	}
		return 0;
}
