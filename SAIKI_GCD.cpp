#include <bits/stdc++.h>
typedef long long ll;
#define RES 2000000;
using namespace std;
int GCD(int m,int n){
	if(n==0) return m;
	return GCD(n,m%n);
}

int main (){
	cin.tie(0);
   ios_base::sync_with_stdio(false);
	//You code here!
	int a,b;
	cin>>a>>b;
	cout<<GCD(a,b)<<endl;
	return 0;
}
