#include <bits/stdc++.h>
typedef long long ll;
#define RES 2000000;
using namespace std;

int func(int N){
	cout<<"called func("<<N<<")"<<endl;
	//base case
	if(N==0) return 0;

	int result = N + func(N-1);
	cout<<N<<result<<endl;
	return result;
}

int main (){
	cin.tie(0);
   ios_base::sync_with_stdio(false);
	//You code here!
	int a;
	cin>>a;
	func(a);
	return 0;
}
