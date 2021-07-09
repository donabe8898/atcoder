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
using Graph1 = vector<int>;			//1次元
using Graph2 = vector<vector<int>>;	//2次元
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
		ll N,M;
		cin>>N>>M;
		Graph1 G[2010];
		rep(i,M){
			int a,b;
			cin>>a>>b;
			a--;
			b--;
			G[a].push_back(b);
		}
		int ans = 0;
		REP(start,0,N){
			queue<int> Q;
			//訪問済みset
			set<int> visited;
			visited.insert(start);
			Q.push(start);
			while(!Q.empty()){
				int c = Q.front();Q.pop();
				for(int nv:G[c]){
					if(!visited.count(nv)) { //未訪問だったら...
						Q.push(nv);
						visited.insert(nv);
					}
				}
			}
			ans += visited.size();
		}
		cout<<ans<<endl;
		return 0;
}
