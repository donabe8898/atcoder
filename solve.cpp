#include <bits/stdc++.h>
using ll = long long int;
#define RES 2000000;
using namespace std;
int main (){
	cin.tie(0);
   ios_base::sync_with_stdio(false);
	int n,tmp=0;
	cin>>n;
	for(int i=1;i<100000;i++){
		tmp+=i;
		if(tmp >= n) {
			cout<<i<<endl;
			break;
		}
	}

	return 0;
}
