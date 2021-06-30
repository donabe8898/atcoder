#include <bits/stdc++.h>
#define RES 2000000;
#define rep(i, s, n) for (int i = s; i < (int)(n); i++)
bool Flag(int bit,int i){return (bit&(1LL<<i));}
using ll = long long;
using namespace std;
int main (){
    cin.tie(0);
    ios_base::sync_with_stdio(false);

    int N;
    bool k=1;
    cin>>N;
    vector<int> a(N);
    for(auto &i:a) cin>>i;
    sort(a.begin(),a.end());
    rep(i,0,N){
      if(a[i]!=(i+1)) k=0;
    }
    cout<<(k?"Yes":"No")<<endl;
	  return 0;
}
