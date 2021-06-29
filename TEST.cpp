#include <bits/stdc++.h>
using ll = long long int;
#define RES 2000000;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using namespace std;
int main (){
	cin.tie(0);
   ios_base::sync_with_stdio(false);
   for(int i=5;i>=1;i--){
     cout<< "i="<<i<<endl;
    if(i % 3 == 0)
      cout<<" "<<i<<"\n";
    else
      cout<<" "<<-i<<"\n";
   }
	 return 0;
}
