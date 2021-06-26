#include <bits/stdc++.h>
using ll = long long int;
#define RES 2000000;
using namespace std;
int main (){
	cin.tie(0);
   ios_base::sync_with_stdio(false);
	int n;
	cin>>n;
	vector<int> a(301010);
	for(int i=0;i<n;i++){
		cin>>a.at(i);
	}
	map<int,int> m;
	int ans = 0;
	for(int j=0;j<n;j++){
		ans += j - m[a[j]];
		m[a[j]]++;
	}
	cout<<ans<<endl;

	return 0;
}

/*
	解説: https://blog.hamayanhamayan.com/entry/2021/06/19/233714
	map:  https://cpprefjp.github.io/reference/map/map.html
*/
