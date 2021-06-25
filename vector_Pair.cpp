#include <bits/stdc++.h>
typedef long long ll;
typedef std::pair<int,int> pairII;
using namespace std;
int main (){
	cin.tie(0);
   ios_base::sync_with_stdio(false);
	vector<pairII> a;
	for(int j=0;j<3;j++){
		for(int i=0;i<5;i++){
			a.push_back(pairII(i,j));
		}
	}
	for(int i=0;i<15;i++){
		cout<<a[i].first<<" "<<a[i].second<<endl;
	}

	return 0;
}
