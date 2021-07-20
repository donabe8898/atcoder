#include<iostream>
#include<vector>
using ll = long long;
using namespace std;
vector<ll> memo;
ll tribo(ll N){
	if(N==0) return 0;
	else if(N==1) return 0;
	else if(N==2) return 1;
	if(memo[N]!=-1)return memo[N];
	return memo[N] =tribo(N-1)+tribo(N-2)+tribo(N-3);
}
int main(){
	int n;
	cin>>n;
	memo.assign(n+1,-1);
	cout<<tribo(n)<<endl;
	return 0;
}
