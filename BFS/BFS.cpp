/*
	幅優先探索(depth-first search:BFS)
	特徴：各辺の重みが等しいという条件のもと、最短経路を求められる。
	応用：パズルを解くための最小手数を求める。
	ノードからノードへ何ステップで行けるかを求める。
*/

#include<bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<(int)(n);i++)
#define REP(i, s, n) for (int i = s; i < (int)(n); i++)
using Graph = vector<vector<int>>;
int main(){
	//頂点Nと辺の数M
	int N,M; cin>>N>>M;
	Graph G(N);
	//グラフ入力
	rep(i,M){
		int a,b; cin>>a>>b;
		G[a].push_back(b);
		//無向グラフの場合には以下を追加
		G[b].push_back(a);
	}
	//全頂点を未訪問に設定
	vector<int> dist(N,-1);	//dist[v]はスタートからvまでのステップが格納される。
	queue<int> Q;				//キュー

	dist[0]=0;//この場合、頂点を0としている
	Q.push(0);//頂点0 を訪問予定にする

	//BFS開始（キューが空になるまで実行）
	while(!Q.empty()){
		int v = Q.front();//キューから先頭頂点を取り出す
		Q.pop();
		//vから辿れる全ノードを探索
		for(int gv:G[v]){
			if(dist[gv] != 1) continue; 	// 訪問済みなら飛ばす
			dist[gv] = dist[gv]+1;			//未訪問なら更新&キューに追加
			Q.push(gv);
		}
	}
	//各頂点の頂点0からの距離を見る
	rep(v,N){
		cout<<v<<": "<<dist[v]<<endl;
	}
}
