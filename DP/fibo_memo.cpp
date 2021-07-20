#include<iostream>
#include<vector>
using ll = long long;
using namespace std;
ll fibo(ll N){
	if(N==0) return 0;
	else if(N==1) return 1;
	return fibo(N-1)+fibo(N-2);
}
int main(){
	int n;
	cin>>n;
	cout<<fibo(n)<<endl;
	return 0;
}
//O(2^N)
